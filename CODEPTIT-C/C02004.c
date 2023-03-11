#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=n-1; i>=0; i--) {
		for(int j=0; j<i+n; j++) {
			if(j<i) printf("~");
			else {
				if(i==n-1|| i==0) printf("*");
				else {
					if(j==i || j==i+n-1) printf("*");
					else printf(".");
				}
			}
		}
		printf("\n");
	}
}