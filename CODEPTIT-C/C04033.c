#include <stdio.h>

int main() {
	int n;
	int check[100000]= {};
	scanf("%d",&n);
	int tmp;
	for(int i=0; i<n; i++) {
		scanf("%d",&tmp);
		if(check[tmp]==0) printf("%d ",tmp);
		check[tmp]++;
	}
}