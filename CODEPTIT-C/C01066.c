#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int res=fmin(fmin(a,b),c);
	printf("%d",res);
}