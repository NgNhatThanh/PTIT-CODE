#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(arr[i]>arr[j]) {
				int tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	for(int i=0; i<n; i++) {
		if(arr[i]%2==0) printf("%d ",arr[i]);
	}
	for(int i=0; i<n; i++) {
		if(arr[i]%2) printf("%d ",arr[i]);
	}
}
