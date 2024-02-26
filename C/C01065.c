#include <stdio.h>

int main() {
	long long n;
	scanf("%lld",&n);
	int check[8]= {};
	while(n) {
		check[n%10]++;
		n/=10;
	}
	for(int i=2; i<=7; i++) {
		if((i==2 || i==3 ||i==5 ||i==7) && check[i]) printf("%d %d\n",i,check[i]);
	}
}
