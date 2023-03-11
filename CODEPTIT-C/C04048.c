#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int check[1010]= {};
	int arr[m];
	for(int i=0; i<m; i++) {
		scanf("%d",&arr[i]);
		int j=arr[i]-k;;
		if(arr[i]-k<=1) j=1;
		int max=arr[i]+k;;
		if(arr[i]+k>=n) max=n;
		for(j; j<=max; j++) {
			check[j]=1;
		}
	}
	int res=0;
	for(int i=1; i<=n; i++) {
		if(check[i]==0) {
			int o=i+k;
			if(o>n) o=n;
			for(o; o>=i; o--) {
				if(check[o]==0) {
					int nan=o+k;
					if(o+k>n) nan=n;
					for(int b=i; b<=nan; b++) check[b]=1;
					res++;
					break;
				}
			}
		}
	}
	printf("%d",res);
}
