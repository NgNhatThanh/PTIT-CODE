#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n, cnt=0;
		scanf("%d",&n);
		int arr[n];
		scanf("%d",&arr[0]);
		for(int i=1; i<n; i++) {
			scanf("%d",&arr[i]);
			if(arr[i]==arr[i-1]) cnt++;
		}
		printf("%d\n",cnt);
	}
}