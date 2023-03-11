#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			if(arr[i]%2==0) printf("%d ",arr[i]);
		}
		printf("\n");
	}
}