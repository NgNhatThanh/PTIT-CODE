#include <stdio.h>
#include <math.h>
#include <string.h>

void in(int arr[], int n) {
	for(int i=0; i<n; i++) printf("%d ",arr[i]);
	printf("\n");
}

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int k=1;
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i]>arr[j]) {
				int tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
		printf("Buoc %d: ",k);
		k++;
		in(arr,n);
	}
}
