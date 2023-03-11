#include <stdio.h>
#include <math.h>
#include <string.h>

int kq(int m, int n, int p, int mot[][n], int hai[][p], int l, int k) {
	int res=0;
	for(int i=0; i<n; i++) {
		res+=mot[l][i]*hai[i][k];
	}
	return res;
}

int main() {
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int mot[m][n];
	int hai[n][p];
	int ba[p][q];
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) scanf("%d",&mot[i][j]);
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<p; j++) scanf("%d",&hai[i][j]);
	}
	for(int i=0; i<p; i++) {
		for(int j=0; j<q; j++) scanf("%d",&ba[i][j]);
	}
	int tmot[m][p];
	int res[m][q];
	for(int i=0; i<m; i++) {
		for(int j=0; j<p; j++) tmot[i][j]=kq(m,n,p,mot,hai,i,j);
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<q; j++) res[i][j]=kq(m,p,q,tmot,ba,i,j);
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<q; j++) printf("%d ",res[i][j]);
		printf("\n");
	}
}