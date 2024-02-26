#include <bits/stdc++.h>
#define ll long long
using namespace std;

int pre[100005];
int vst[100005];

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        long long res = 0;
        int ma = 0;
        for (int &x : a){
            cin >> x;
            ma = max(ma, x);
            ++pre[x];
        }
        for (int i = 1; i <= ma; ++i) pre[i] += pre[i - 1];
        for (int x : a){
            if (!vst[x]){
                vst[x] = 1;
                if (!x){
                    res += 1ll * pre[x] * (pre[x] - 1) / 2;
                }
                else{
                    ll tmp = pre[x - 1];
                    ll sl = pre[x] - pre[x - 1];
                    if(x >= k) tmp -= pre[x - k];
                    res += sl * tmp + sl * (sl - 1) / 2;
                }
            }
        }
        memset(pre, 0, sizeof(pre));
        memset(vst, 0, sizeof(vst));
        cout << res << '\n';
    }
}