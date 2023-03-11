#include <stdio.h>
#include <math.h>
#include <string.h>

int checkk(int arr[], int k, int n) {
	for(int i=k; i<k+n-1; i++) {
		if(arr[i]>=arr[i+1]) return 0;
	}
	return 1;
}

void in(int arr[], int k, int n) {
	for(int i=k; i<k+n; i++) printf("%d ",arr[i]);
	printf("\n");
}


int main() {
	int a;
	scanf("%d",&a);
	int k=1;
	while(a--) {
		int n;
		int cnt=1;
		int max=1;
		scanf("%d",&n);
		int arr[n];
		scanf("%d",&arr[0]);
		for(int i=1; i<n; i++) {
			scanf("%d",&arr[i]);
			if(arr[i]>arr[i-1]) cnt++;
			else {
				if(cnt>max) max=cnt;
				cnt=1;
			}
			if(cnt>max) max=cnt;
		}
		if(cnt>max) max=cnt;
		printf("Test %d:\n",k);
		k++;
		printf("%d\n",max);
		for(int i=0; i<n-max+1; i++) {
			if(checkk(arr,i,max)) in(arr,i,max);
		}
	}
}
