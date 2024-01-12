#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n*n];
    for (int i = 0; i < n*n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n*n);
    int top = 1, down = n - 1, left = 0, right = n - 1;
    int check = 1;
    int i = 0, j = 0;
    int idx = 0;
    int res[n][n];
    while (idx < n*n)
    {
        if (check)
        {
            check = 0;
            for (; j <= right; ++j)
                res[i][j] = a[idx++];
            --j;
            ++i;
            --right;
            for (; i <= down; ++i)
                res[i][j] = a[idx++];
            --i;
            --j;
            --down;
        }
        else
        {
            check = 1;
            for (; j >= left; --j)
                res[i][j] = a[idx++];
            ++j;
            --i;
            ++left;
            for (; i >= top; --i)
                res[i][j] = a[idx++];
            ++i;
            ++j;
            ++top;
        }
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j) cout << res[i][j] << ' ';
        cout << '\n'; 
    }
}