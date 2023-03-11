#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1; i<=a; i++) {
		int k=i;
		if(k>b) k=b;
		int m=k-1;
		if(m>=b) m=b-1;
		printf("%c",k+64);
		k++;
		for(int j=2; j<=b; j++) {
			if(k<=b) {
				printf("%c",k+64);
				k++;
			} else {
				printf("%c",m+64);
				m--;
			}
		}
		printf("\n");
	}
}
