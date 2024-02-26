#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int st=1;
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n-1; i++) {
		int check=0;
		for(int j=0; j<n-i-1; j++) {
			if(arr[j]>arr[j+1]) {
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				check=1;
			}
		}
		if(!check) break;
		printf("Buoc %d: ",st);
		st++;
		for(int i=0; i<n; i++) printf("%d ",arr[i]);
		printf("\n");
	}
}
