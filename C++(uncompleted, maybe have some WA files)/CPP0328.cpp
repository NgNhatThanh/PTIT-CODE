#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int res = 0;
		for(int i=0; i<s.size(); ++i){
			int t8 = 0, t3 = 0;
			for(int j=i; j<s.size(); ++j){
				t8 = (t8*10 + s[j] - '0') % 8;
				t3 = (t3*10 + s[j] - '0') % 3;
				if(!t8 && t3) ++res;
			}
		}
		cout << res << '\n';
	}
}