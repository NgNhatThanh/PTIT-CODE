#include <stdio.h>

int check(int arr[], int n, int a) {
	if(a==n-1) return 1;
	for(int i=a+1; i<n; i++) {
		if(arr[i]>=arr[a]) return 0;
	}
	return 1;
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
		for(int i=0; i<n; i++) {
			if(check(arr, n, i)) printf("%d ",arr[i]);
		}
		printf("\n");
	}
}