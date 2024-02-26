#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		int k=1;
		for(int j=0; j<n; j++) {
			if(j<=i) printf("0 ");
			else {
				printf("%d ",k);
				k++;
			}
		}
		printf("\n");
	}
}