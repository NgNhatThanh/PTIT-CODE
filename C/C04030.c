#include <stdio.h>
#include <math.h>
#include <string.h>

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

void sorthai(int arr[], int n) {
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(arr[i]<arr[j]) {
				int tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}

int main() {
	int a;
	scanf("%d",&a);
	int test=1;
	while(a--) {
		int n;
		scanf("%d",&n);
		int mot[n], hai[n];
		int k=0;
		for(int i=0; i<n; i++) {
			scanf("%d",&mot[i]);
		}
		for(int i=0; i<n; i++) {
			scanf("%d",&hai[i]);
		}
		sort(mot,n);
		sorthai(hai,n);
		printf("Test %d:\n",test);
		test++;
		for(int i=0; i<2*n; i++) {
			if(i%2) {
				printf("%d ",hai[k++]);
			} else {
				printf("%d ",mot[k]);
			}
		}
		printf("\n");
	}
}
