#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int r1=n%10;
	int r2;
	while(n){
		r2=n%10;
		n/=10;
	}
	printf("%d %d",r2,r1);
}