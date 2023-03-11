#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i+n;j++){
			if(j<i) printf("~");
			else printf("*");
		}
		printf("\n");
	}
}