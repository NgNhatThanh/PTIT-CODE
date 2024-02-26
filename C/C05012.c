#include <stdio.h>
#include <math.h>
#include <string.h>

int res(int n, int arr[][n], int i, int j) {
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
		int n;
		scanf("%d",&n);
		int arr[n][n];
		for(int i=0; i<n; i++) {
			int ck=1;
			for(int j=0; j<n; j++) {
				if(j>i) arr[i][j]=0;
				else {
					arr[i][j]=ck;
					ck++;
				}
			}
		}
		printf("Test %d:\n",t);
		t++;
		int re[n][n];
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				re[i][j]=res(n,arr,i,j);
				printf("%d ",re[i][j]);
			}
			printf("\n");
		}
	}
}
