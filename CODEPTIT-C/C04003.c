#include <stdio.h>
#include <math.h>

int check(int arr[], int n){
	int l=0, r=n-1;
	while(l<r){
		if(arr[l]!=arr[r]) return 0;
		l++; r--;
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
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		if(check(arr,n)) printf("YES\n");
		else printf("NO\n");
	}
}