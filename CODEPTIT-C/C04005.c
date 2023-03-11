#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		int n;
		scanf("%d",&n);
		int arr[n];
		int max=0;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			if(arr[i]>max) max=arr[i];
		}
		printf("%d\n",max);
		for(int i=0;i<n;i++){
			if(arr[i]==max) printf("%d ",i);
		}
		printf("\n");
	}
}