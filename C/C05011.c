#include <stdio.h>
#include <math.h>
#include <string.h>

int res(int n, int arr[][n], int i, int j, int m) {
	int rr=0;
	for(int k=0; k<n; k++) {
		rr+=(arr[i][k]*arr[j][k]);
	}
	return rr;
}

int main() {
	int a;
	scanf("%d",&a);
	int t=1;
	while(a--) {
		int m,n;
		scanf("%d%d",&m,&n);
		int arr[m][n];
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) scanf("%d",&arr[i][j]);
		}
		printf("Test %d:\n",t);
		t++;
		int re[m][m];
		for(int i=0; i<m; i++) {
			for(int j=0; j<m; j++) {
				re[i][j]=res(n,arr,i,j,m);
				printf("%d ",re[i][j]);
			}
			printf("\n");
		}
	}
}
