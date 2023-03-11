#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	int tt=1;
	while(t--) {
		printf("Test %d:\n",tt);
		tt++;
		int n;
		scanf("%d",&n);
		int res[n][n];
		int tren=1, duoi=n-1, trai=0, phai=n-1;
		int k=n*n;
		int check=0;
		int i=0, j=-1;
		while(k>=1) {
			if(check==0) {
				for(j++; j<=phai; j++) {
					res[i][j]=k;
					k--;
				}
				phai--;
				j--;
				for(i++; i<=duoi; i++) {
					res[i][j]=k;
					k--;
				}
				i--;
				duoi--;
			} else {
				for(j--; j>=trai; j--) {
					res[i][j]=k;
					k--;
				}
				j++;
				trai++;
				for(i--; i>=tren; i--) {
					res[i][j]=k;
					k--;
				}
				i++;
				tren++;
			}
			if(check) check=0;
			else check=1;
		}
		for(int a=0; a<n; a++) {
			for(int b=0; b<n; b++) printf("%d ",res[a][b]);
			printf("\n");
		}
	}
}

