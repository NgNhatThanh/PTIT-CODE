#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=0; i<a; i++) {
		int k=i;
		if(k>=b) k=b-1;
		for(int j=1; j<=b; j++) {
			if(k<b) {
				printf("%c",k+64);
				k++;
			} else printf("%c",k-1+64);
		}
		printf("\n");
	}
}
