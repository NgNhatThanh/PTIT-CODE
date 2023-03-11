#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	int min1 = 50001;
	int min2 = 50002;
	int sum1=0;
	int sum2=0;
	int m,n;
	while(a--) {
		scanf("%d%d",&n,&m);
		sum1+=n;
		sum2+=m;
		min1=fmin(n,min1);
		min2=fmin(m,min2);
	}
	sum1+=min2;
	sum2+=min1;
	int res=fmax(sum1,sum2);
	printf("%d",res);
}