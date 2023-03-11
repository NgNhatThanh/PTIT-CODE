#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1; i<=a; i++) {
		int k=i;
		int m=2;
		for(int j=1; j<=b; j++) {
			if(k>=1) {
				printf("%d",k);
				k--;
			} else {
				printf("%d",m);
				m++;
			}
		}
		printf("\n");
	}
}
