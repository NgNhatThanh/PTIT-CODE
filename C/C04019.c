#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		int arr[n];
		int max=0;
		int check[30001]= {};
		for(int i=0; i<n; i++) {
			scanf("%d",&arr[i]);
			check[arr[i]]++;
			if(check[arr[i]]>max) max=check[arr[i]];
		}
		for(int i=0; i<n; i++) {
			if(check[arr[i]]==max) {
				printf("%d ",arr[i]);
				check[arr[i]]=0;
			}
		}
		printf("\n");
	}
}

