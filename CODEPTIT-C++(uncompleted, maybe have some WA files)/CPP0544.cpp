#include <bits/stdc++.h>
#define ll long long
#define PI 3.141592653589793238
#define eps 0.00001
using namespace std;

struct dinh{
    double x, y;
};

double canh(dinh a, dinh b){
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int check(double c1, double c2, double c3){
    return c1 + c2 > c3 && c1 + c3 > c2 && c2 + c3 > c2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        dinh a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        double c1 = canh(a, b), c2 = canh(a, c), c3 = canh(b, c);
        if(!check(c1, c2, c3)){
            cout << "INVALID\n";
            continue;
        }
        double ncv = (c1 + c2 + c3)/2; 
        double s = sqrt(ncv*(ncv - c1)*(ncv - c2)*(ncv - c3));
        double r = c1*c2*c3/(4*s);
        double res = PI*r*r;
        cout << setprecision(3) << fixed << res << '\n';
    }
}