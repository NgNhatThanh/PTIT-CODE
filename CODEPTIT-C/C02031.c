#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=n-1; i>=0; i--) {
		for(int j=n-1; j<=n-1+n-1; j++) {
			printf("%c",j+64);
		}
		n--;
		printf("\n");
	}
}
