#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	int k=97;
	for(int i=1; i<=n; i++) {
		if(i!=1) {
			if(i%2) k+=i;
			else k+=i-1;
		}
		for(int j=1; j<=i; j++) {
			if(i%2) {
				printf("%c ",k);
				k++;
			} else {
				printf("%c ",k);
				k--;
			}
		}
		printf("\n");
	}
}
