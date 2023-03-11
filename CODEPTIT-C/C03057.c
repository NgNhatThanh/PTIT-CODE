#include <stdio.h>
#include <math.h>
#include <string.h>

long long change(long long n, int a, int b) {
	int k=0;
	long long tmp=0;
	while(n) {
		long long add=pow(10,k);
		int them=n%10;
		if(them==a) tmp+=b*add;
		else tmp+=them*add;
		k++;
		n/=10;
	}
	return tmp;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		long long m,n;
		scanf("%lld%lld",&m,&n);
		printf("%lld %lld\n",change(m,6,5)+change(n,6,5), change(m,5,6)+change(n,5,6));
	}
}
