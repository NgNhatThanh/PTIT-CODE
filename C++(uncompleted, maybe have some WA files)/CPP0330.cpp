#include <bits/stdc++.h>
#define ll long long
using namespace std;

int pre[10] = {};

int cmp(int a, int b){
	if(pre[a] == pre[b]) return a > b;
    return pre[a] > pre[b];
}

int main(){
    int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<int> le, chan;
		for(char x : s) ++pre[x - '0'];
		for(int i=0; i<10; ++i){
			if(pre[i]%2) le.push_back(i);
			else if(pre[i]) chan.push_back(i);
		}
        if(chan.size() && !chan.back()) chan.pop_back();
		if(le.size() > 1){
			sort(begin(le), end(le), cmp);
            if(!le[0] && chan.empty()) swap(le[0], le[1]);
		}
        for(int i=chan.size()-1; i>=0; --i){
            int tmp = pre[chan[i]]/2;
            while(pre[chan[i]] > tmp){
                cout << chan[i];
                --pre[chan[i]];
            }
        }
        if(le.size()) while(pre[le[0]]--) cout << le[0];
        for(int i=0; i<chan.size(); ++i){
            while(pre[chan[i]]--) cout << chan[i];
        }
        cout << '\n';
        memset(pre, 0, sizeof(pre));
	}
}