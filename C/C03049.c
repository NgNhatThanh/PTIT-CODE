#include <stdio.h>
#include <math.h>

int check(long long n){
	int le=0, chan=0;
	while(n){
		if((n%10)%2) le++;
		else chan++;
		n/=10;
	}
	return chan<=le;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		long long n;
		scanf("%lld",&n);
		if(n%2 && check(n)) printf("YES\n");
		else printf("NO\n");
	}
}