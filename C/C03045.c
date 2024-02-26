#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		long long n;
		scanf("%lld",&n);
		long long res;
		for(int i=2; i<=sqrt(n); i++) {
			while(n%i==0) {
				n/=i;
				res=i;
			}
		}
		if(n!=1) res=n;
		printf("%lld\n",res);
	}
}
