#include <stdio.h>

void sort(int arr[], int n) {
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(arr[i]>arr[j]) {
				int tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int m1=0, m2;
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	for(int i=0; i<n; i++) printf("%d ",arr[i]);

}