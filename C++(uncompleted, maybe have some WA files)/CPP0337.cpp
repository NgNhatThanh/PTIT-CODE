#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		set<char> cnt;
		for(char x : s) cnt.insert(x);
		map<char, int> mp;
        set<char> se;
		int res = s.size();
		int l = 0, r = 0;
		while(r < s.size()){
            se.insert(s[r]);
			++mp[s[r]];
			while(se.size() == cnt.size()){
                --mp[s[l]];
                if(!mp[s[l]]) se.erase(s[l]);
                res = min(res, r-l+1);
                ++l;   
            }
			++r;
		}
		cout << res << '\n';
	}
}