#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long
#include <limits.h>

int cmp(const void *a, const void *b) {
	int x = *(int*)a;
	int y = *(int*)b;
	return x-y;
}

void process() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	qsort(arr, n, sizeof(int), cmp);
	int hieu=INT_MAX;
	int res=0;
	for(int i=1; i<n; i++) {
		if(arr[i]-arr[i-1]<hieu) {
			hieu=arr[i]-arr[i-1];
			res=1;
		} else if(arr[i]-arr[i-1]==hieu) res++;
	}
	printf("%d %d\n",hieu, res);
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}
}