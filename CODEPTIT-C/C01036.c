#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int res=1;
	while(n){
		res*=n%10;
		n/=10;
	}
	printf("%d",res);
}	