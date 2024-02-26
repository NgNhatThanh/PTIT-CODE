#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1; i<=a; i++) {
		int k=i;
		int m=k-1;
		if(m>=b) m=b-1;
		printf("%d",k);
		k++;
		for(int j=2; j<=b; j++) {
			if(k<=b) {
				printf("%d",k);
				k++;
			} else {
				printf("%d",m);
				m--;
			}
		}
		printf("\n");
	}
}
