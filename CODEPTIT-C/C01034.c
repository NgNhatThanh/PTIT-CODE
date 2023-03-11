#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int res=0;
	int arr[100000];
	for(int i=1; i<=sqrt(b); i++) {
		if(i*i>=a) arr[res++]=i*i;
	}
	printf("%d\n",res);
	for(int i=0; i<res; i++) printf("%d\n",arr[i]);
}