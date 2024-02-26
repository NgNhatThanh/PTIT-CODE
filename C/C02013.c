#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int tmp=fmax(a,b);
	for(int i=a; i>=1; i--) {
		int k=tmp;
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
		tmp--;
		printf("\n");
	}
}
