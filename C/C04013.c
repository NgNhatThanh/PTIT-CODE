#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int check[10000]={};
	int max=0, cnt=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		check[arr[i]]++;
		if(check[arr[i]]<2) cnt++;
		else if(check[arr[i]]==2) cnt--;
		if(arr[i]>max) max=arr[i];
	}
	printf("%d\n",cnt);
	for(int i=1;i<=max;i++){
		if(check[i]==1)	printf("%d ",i);
	}
}	