#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		for(int j=1+(i%2==0); j<=2*i; j+=2) {
			printf("%d",j);
		}
		printf("\n");
	}
}
