#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int ucln(int a, int b) {
	int sl=fmax(a,b);
	int sb=fmin(a,b);
	if(sl%sb==0) return sb;
	return ucln(sb, sl%sb);
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0; i<n; i++) {
			scanf("%d",&arr[i]);
		}
		printf("%d ",arr[0]);
		for(int i=1; i<n; i++) {
			printf("%d ",1ll*arr[i]*arr[i-1]/ucln(arr[i], arr[i-1]));
		}
		printf("%d\n",arr[n-1]);
	}
}