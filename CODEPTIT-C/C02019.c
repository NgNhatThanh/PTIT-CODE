#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		int k=2;
		for(int j=1; j<=2*i-1; j++) {
			if(j<=i) {
				printf("%d",k);
				k+=2;
			} else {
				k-=2;
				int m=k-2;
				printf("%d",m);
			}
		}
		printf("\n");
	}
}