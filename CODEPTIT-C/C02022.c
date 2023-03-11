#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	int k=1;
	for(int i=1; i<=n; i++) {
		if(i!=1) {
			if(i%2) k+=i;
			else k+=i-1;
		}
		for(int j=1; j<=i; j++) {
			if(i%2) {
				printf("%d ",k);
				k++;
			} else {
				printf("%d ",k);
				k--;
			}
		}
		printf("\n");
	}
}
