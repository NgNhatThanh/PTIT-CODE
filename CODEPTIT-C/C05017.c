#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int m,n;
		scanf("%d%d",&m,&n);
		int res[m][n];
		int tren=1, duoi=m-1, trai=0, phai=n-1;
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) scanf("%d",&res[i][j]);
		}
		int k=1;
		int check=0;
		int i=0, j=-1;
		while(k<=m*n) {
			if(check==0) {
				for(j++; j<=phai; j++) {
					printf("%d ",res[i][j]);
					k++;
				}
				phai--;
				j--;
				for(i++; i<=duoi; i++) {
					printf("%d ",res[i][j]);
					k++;
				}
				i--;
				duoi--;
			} else {
				for(j--; j>=trai; j--) {
					printf("%d ",res[i][j]);
					k++;
				}
				j++;
				trai++;
				for(i--; i>=tren; i--) {
					printf("%d ",res[i][j]);
					k++;
				}
				i++;
				tren++;
			}
			if(check) check=0;
			else check=1;
		}
		printf("\n");
	}
}

