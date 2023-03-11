#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int arr[a][b];
	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) scanf("%d",&arr[i][j]);
	}
	int m,n;
	scanf("%d%d",&m,&n);
	m--;
	n--;
	for(int i=0; i<a; i++) {
		int tmp=i;
		if(i==m) {
			i=n;
		} else if(i==n) i=m;
		for(int j=0; j<b; j++) printf("%d ",arr[i][j]);
		i=tmp;
		printf("\n");
	}
}
