#include <stdio.h>
#include <math.h>
#include <string.h>

int nt[100]= {0,1};

void sang() {
	for(int i=2; i<100; i++) nt[i]=nt[i-1]+nt[i-2];
}

int main() {
	sang();
	int n;
	scanf("%d",&n);
	int res[n][n];
	int tren=1, duoi=n-1, trai=0, phai=n-1;
	int k=0;
	int check=0;
	int i=0, j=-1;
	while(k<n*n) {
		if(check==0) {
			for(j++; j<=phai; j++) {
				res[i][j]=nt[k++];
			}
			phai--;
			j--;
			for(i++; i<=duoi; i++) {
				res[i][j]=nt[k];
				k++;
			}
			i--;
			duoi--;
		} else {
			for(j--; j>=trai; j--) {
				res[i][j]=nt[k];
				k++;
			}
			j++;
			trai++;
			for(i--; i>=tren; i--) {
				res[i][j]=nt[k];
				k++;
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

