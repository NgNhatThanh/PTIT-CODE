#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	int minm=10000000, minn=10000000;
	while(a--) {
		int m,n;
		scanf("%d%d",&m,&n);
		minm=fmin(m,minm);
		minn=fmin(n,minn);
	}
	long long res=1ll*minn*minm;
	printf("%lld",res);
}

