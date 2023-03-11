#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

int cmp(const void *a, const void *b) {
	int x = *(int*)a;
	int y = *(int*)b;
	return x-y;
}

int search ( int j, int n, int arr[], int tim) {
	int l=j, r=n-1;
	while(l<=r) {
		int mid=(r+l)/2;
		if(tim==arr[mid]) return 1;
		if(tim>arr[mid]) l=mid+1;
		else r=mid-1;
	}
	return 0;
}

void process() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%lld",&arr[i]);
	}
	qsort(arr, n, 4, cmp);
	for(int i=0; i<n-2; i++) {
		for(int j=i+1; j<n-1; j++) {
			ll tmp = 1ll*arr[i]*arr[i] + 1ll*arr[j]*arr[j];
			if(sqrt(tmp) == (ll)sqrt(tmp)) {
				if(search(j+1,n, arr,(ll)sqrt(tmp))) {
					printf("YES\n");
					return;
				}
			}
		}
	}
	printf("NO\n");
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}
}