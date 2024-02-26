#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a; i>=1; i--) {
		int k=i;
		if(k>b) k=b;
		for(int j=1; j<=b; j++) {
			if(k<b) {
				printf("%c",k+64);
				k++;
			} else printf("%c",k+64);
		}
		printf("\n");
	}
}
