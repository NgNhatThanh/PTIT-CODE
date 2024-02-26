#include <stdio.h>
#include <math.h>
#include <string.h>

void process() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i]==arr[j]) {
				printf("%d\n",arr[i]);
				return ;
			}
		}
	}
	printf("NO\n");
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}
}

