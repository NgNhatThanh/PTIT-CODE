#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		long long n;
		scanf("%lld",&n);
		long long max=0;
		for(int i=2; i<=sqrt(n); i++) {
			while(n%i==0) {
				n/=i;
				if(i>max) max=i;
			}
		}
		if(n!=1) max=n;
		printf("%lld\n",max);
	}
}
