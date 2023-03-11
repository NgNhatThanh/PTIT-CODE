#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int tmp=fmax(a,b);
	for(int i=1; i<=a; i++) {
		char k=tmp+96;
		int kk=tmp;
		for(int j=1; j<=b; j++) {
			if(j<=i) {
				printf("%c",k);
				k--;
			} else printf("%c",k+1);
		}
		printf("\n");
	}
}
