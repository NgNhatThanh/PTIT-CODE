#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m], b[n];
	int max=0;
	int checka[1001]= {}, checkb[1001]= {};
	for(int i=0; i<m; i++) {
		scanf("%d",&a[i]);
		checka[a[i]]++;
		if(a[i]>max) max=a[i];
	}
	for(int i=0; i<n; i++) {
		scanf("%d",&b[i]);
		checkb[b[i]]++;
		if(b[i]>max) max=b[i];
	}
	for(int i=1; i<=max; i++) {
		if(checka[i]&&checkb[i]) printf("%d ",i);
	}
	printf("\n");
	for(int i=1; i<=max; i++) {
		if(checka[i]&&checkb[i]==0) printf("%d ",i);
	}
	printf("\n");
	for(int i=1; i<=max; i++) {
		if(checka[i]==0&&checkb[i]) printf("%d ",i);
	}
}
