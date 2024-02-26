#include <stdio.h>
#include <math.h>

int check(long long n) {
	while(n) {
		if((n%10)%2) return 0;
		n/=10;
	}
	return 1;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		long long n;
		scanf("%lld",&n);
		if(n%2) printf("NO\n");
		else {
			if(check(n)) printf("YES\n");
			else printf("NO\n");
		}
	}
}


