#include <bits/stdc++.h>
using namespace std;

void tich(string a, string b){
	vector<int> res(a.size() + b.size(), 0);
	reverse(begin(a), end(a));
	reverse(begin(b), end(b));
	for(int i=0; i<a.size(); ++i){
		for(int j=0; j<b.size(); ++j){
			int tmp = (a[i] - '0')*(b[j] - '0');
			res[i+j] += tmp;
			if(res[i+j] >= 10){
				res[i+j+1] += res[i+j]/10;
				res[i+j] %= 10;
			}
		}
	}
    while(!res.back()) res.pop_back();
    reverse(begin(res), end(res));
    for(int x : res) cout << x;
    cout << '\n';
}

int main(){
    int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		tich(a, b);
	}
}