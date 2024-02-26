#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	int k=65;
	for(int i=1; i<=n; i++) {
		int m=k;
		int h=n-1;
		for(int j=1; j<=i; j++) {
			printf("%c ",m);
			m+=h;
			h--;
		}
		k++;
		printf("\n");
	}
}
