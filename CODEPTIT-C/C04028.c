#include <stdio.h>
#include <math.h>
#include <string.h>

void in(int arr[], int n) {
	for(int i=0; i<=n; i++) printf("%d ",arr[i]);
	printf("\n");
}

int main() {
	int n;
	scanf("%d",&n);
	int arr[200];
	int k=1;
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	printf("Buoc 0: %d\n",arr[0]);
	for(int i=1; i<n; i++) {
		int x=arr[i], idx=i-1;
		while(idx>=0 && arr[idx]>x) {
			arr[idx+1] = arr[idx];
			idx--;
		}
		arr[idx+1]=x;
		printf("Buoc %d: ",k);
		k++;
		in(arr,i);
	}
}
