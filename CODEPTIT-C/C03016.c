#include <stdio.h>
#include <math.h>
#include <string.h>

long long fibo[93]= {0,1};

void fb() {
	for(int i=2; i<=92; i++) fibo[i]=fibo[i-1]+fibo[i-2];
}

int check(long long n) {
	for(int i=0; i<=92; i++) {
		if(n==fibo[i]) return 1;
	}
	return 0;
}

int main() {
	fb();
	int a;
	scanf("%d",&a);
	while(a--) {
		long long n;
		scanf("%lld",&n);
		check(n)? printf("YES\n"): printf("NO\n");
	}
}
