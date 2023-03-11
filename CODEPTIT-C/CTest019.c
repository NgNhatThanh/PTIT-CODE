#include <stdio.h>
#include <math.h>
#include <string.h>

void sort(int m, int arr[][m], int n, int k) {
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i][k]>arr[j][k]) {
				int tmp=arr[i][k];
				arr[i][k]=arr[j][k];
				arr[j][k]=tmp;
			}
		}
	}
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		int arr[n][m];
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) scanf("%d",&arr[i][j]);
		}
		sort(m, arr, n,k-1);
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) printf("%d ",arr[i][j]);
			printf("\n");
		}
	}
}