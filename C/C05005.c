#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	int test=1;
	while(a--) {
		printf("Test %d:\n",test);
		test++;
		int m,n;
		scanf("%d%d",&m,&n);
		int arr[m][n];
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				scanf("%d",&arr[i][j]);
			}
		}
		for(int i=1; i<m; i++) {
			for(int j=1; j<n; j++) {
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	}
}