#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int check[10000]={};
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		check[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		if(check[arr[i]]) {
			printf("%d %d\n",arr[i],check[arr[i]]);
			check[arr[i]]=0;
		}
	}
}	