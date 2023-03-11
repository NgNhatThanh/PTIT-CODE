#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		printf("%d = ",n);
		for(int i=2; i<=sqrt(n); i++) {
			int mu=0;
			while(n%i==0) {
				mu++;
				n/=i;
			}
			if(mu) {
				printf("%d^%d ",i,mu);
				if(n!=1) printf("* ");
			}
		}
		if(n!=1) printf("%d^1",n);
		printf("\n");
	}
}


