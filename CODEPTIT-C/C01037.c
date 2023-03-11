#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int hieu=abs(a-b);
	printf("%lld",1ll*(a+b)*(hieu+1)/2);
}