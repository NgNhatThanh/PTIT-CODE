#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	int test=1;
	while(a--) {
		int n;
		scanf("%d",&n);
		int arr[n];
		int check[100001]= {};
		for(int i=0; i<n; i++) {
			scanf("%d",&arr[i]);
			check[arr[i]]++;
		}
		printf("Test %d:\n",test);
		test++;
		for(int i=0; i<n; i++) {
			if(check[arr[i]]) {
				printf("%d xuat hien %d lan\n",arr[i],check[arr[i]]);
				check[arr[i]]=0;
			}
		}
	}
}