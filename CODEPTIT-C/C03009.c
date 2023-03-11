#include <stdio.h>
#include <math.h>

int check(int n) {
	if(n==1) return 0;
	int res=1;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) {
			res+=i;
			if((n/i)!=i) res+=n/i;
		}
	}
	return res==n;
}

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int tmp=b;
	b=fmax(a,tmp);
	a=fmin(a,tmp);
	for(int i=a; i<=b; i++) {
		if(check(i)) printf("%d ",i);
	}
}
