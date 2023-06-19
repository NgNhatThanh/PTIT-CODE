#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
	ll a,b;
	while(scanf("%lld%lld",&a,&b)!=-1) {
		int cal=(ll)abs(a-b);
		int tmp=cal/2;
		int hs=tmp*2;
		ll delta = 1+1ll*4*hs;
		double sqr=sqrt(delta);
		int csc = (-1+sqr)/2;// so lan de di tu 1->cal/2 ma moi buoc tang len 1 
		ll du = cal-2*(csc*(csc+1)/2);
		ll res=2*csc;
		ll tam=csc;
		if(du>=csc+1) {
			du-=csc+1;
			res++;
		}
		for(int i=tam; i>=1; i--) {
			while(du-i>=0) {
				du-=i;
				res++;
			}
		}
		printf("%d\n",res);
	}
}
