#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1; i<=a; i++) {
		for(int j=1; j<=b+i-1; j++) {
			if(j<i) printf("~");
			else printf("*");
		}
		printf("\n");
	}
}