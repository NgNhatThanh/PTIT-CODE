#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		int k=66;
		for(int j=1; j<=2*i-1; j++) {
			if(j==1 || j==2*i-1) printf("@");
			else {
				if(j<=i) {
					printf("%c",k);
					k+=2;
				} else {
					k-=2;
					int m=k-2;
					printf("%c",m);
				}
			}
		}
		printf("\n");
	}
}
