#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=2; i<=sqrt(n); i++) {
		int mu=0;
		while(n%i==0) {
			printf("%d",i);
			n/=i;
			if(n!=1) printf("x");
		}
	}
	if(n!=1) printf("%d",n);
}