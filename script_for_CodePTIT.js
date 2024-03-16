// ==UserScript==
// @name         Script for CodePTIT
// @namespace    http://tampermonkey.net/
// @version      2024-03-14
// @description  script to make CodePTIT more convinient
// @author       NgNhatThanh
// @match        https://code.ptit.edu.vn/student/question/*
// @grant        none
// ==/UserScript==

(function() {
    'use strict';

    function copy(inp) {
        let temp = document.createElement('textarea');
        document.body.appendChild(temp);
        temp.value = inp;
        temp.select();
        navigator.clipboard.writeText(temp.value);
        temp.remove();
    }

    function addButton(titleId, inpId){
        var tabArr = document.getElementsByTagName("td");
        var textArr = tabArr[inpId].getElementsByTagName("p");

        var title = tabArr[titleId].getElementsByTagName("p");
        title[0].style.display = "inline";
        var inp = "";

        var btn = document.createElement("BUTTON");
        btn.innerHTML = "Copy";
        tabArr[titleId].insertBefore(btn, tabArr[titleId].secondChild);

        for(i = 0; i < textArr.length; ++i){
            inp += textArr[i].textContent + "\n";
        }

        var tmp = inp;
        inp = "";
        for(var i = 0; i < tmp.length; ++i){
            if(tmp[i] !== "\t") inp += tmp[i];
        }

        btn.style.backgroundColor = "lightgrey";

        btn.addEventListener("click", function(){
            copy(inp);
            btn.textContent = "Copied";
            this.style.backgroundColor = "lightgreen";
            setTimeout(function(){
                btn.style.backgroundColor = "lightgrey";
            }, 150);
        });
    }

    addButton(0, 2);
    addButton(1, 3);

})();