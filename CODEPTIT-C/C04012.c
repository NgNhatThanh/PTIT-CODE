#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int check[100000]= {};
	int max=0;
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		check[arr[i]]++;
		if(arr[i]>max) max=arr[i];
	}
	int cnt=0;
	for(int i=0; i<n; i++) {
		if(check[arr[i]]>1) {
			printf("%d ",arr[i]);
			check[arr[i]]=1;
			cnt++;
		}
	}
	if(cnt==0) printf("0");
}