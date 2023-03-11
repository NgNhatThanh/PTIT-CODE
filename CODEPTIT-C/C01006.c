#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(b) printf("%d %d %d %.2f %d",a+b,a-b,a*b,1.0*a/b,a%b);
	else printf("0");
}