#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		int k=n-1;
		int m=i;
		for(int j=1; j<=i; j++) {
			printf("%d ",m);
			m+=k;
			k--;
		}

		printf("\n");
	}
}
