#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int m1=0, m2;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>m1){
			m2=m1;
			m1=arr[i];
		}
		if(arr[i]<m1 && arr[i]>m2) m2=arr[i];
	}
	printf("%d %d",m1,m2);
	
}