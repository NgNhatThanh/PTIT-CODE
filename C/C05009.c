#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int k=0;
	for(int i=0; i<n; i++) {
		int tmp=arr[i][k];
		arr[i][k]=arr[i][n-1-k];
		arr[i][n-1-k]=tmp;
		k++;
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
