#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	int t=1;
	while(a--) {
		int m,n;
		scanf("%d%d",&m,&n);
		int arr[m][n];
		int check[10000]= {};
		int max=-1;
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				scanf("%d",&arr[i][j]);
				check[arr[i][j]]++;
				if(arr[i][j]>max) max=arr[i][j];
			}
		}
		printf("Test %d:\n",t);
		t++;
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				for(int l=i; l<m; l++) {
					for(int k=j; k<n; k++) {
						if(arr[i][j]>arr[l][k]) {
							int tmp=arr[i][j];
							arr[i][j]=arr[l][k];
							arr[l][k]=tmp;
						}
					}
				}
			}
		}
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	}
}

