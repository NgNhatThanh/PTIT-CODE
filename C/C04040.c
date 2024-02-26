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
		scanf("%d",&arr[0]);
		long long res=arr[0]*(arr[0]>0), tmp=res;
		for(int i=1; i<n; i++) {
			scanf("%d",&arr[i]);
			tmp+=arr[i];
			if(tmp<0) tmp=0;
			if(tmp>res) res=tmp;
		}
		printf("%lld\n",res);
	}
}
