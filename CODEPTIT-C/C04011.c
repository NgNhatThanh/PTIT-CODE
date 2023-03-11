#include <stdio.h>
#include <math.h>

int check(int arr[], int n){
	for(int i=0;i<n;i++){
		if(arr[i]>arr[n]) return 0;
	}
	return 1;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		int n, res=1;
		scanf("%d",&n);
		int arr[n];
		scanf("%d",&arr[0]);
		for(int i=1;i<n;i++){
			scanf("%d",&arr[i]);
			if(check(arr,i)) res++;
		}
		printf("%d\n",res);
	}
}	