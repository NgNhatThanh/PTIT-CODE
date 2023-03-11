#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		for(int i=2; i<=sqrt(n); i++) {
			while(n%i==0) {
				printf("%d ",i);
				n/=i;
			}
		}
		if(n!=1) printf("%d",n);
		printf("\n");
	}


}