#include <stdio.h>
#include <math.h>
#include <string.h>

int nt[100001];

void seive() {
	nt[1]=1;
	for(int i=2; i<=sqrt(100000); i++) {
		for(int j=i*i; j<=100000; j+=i) nt[j]=1;
	}
}

int main() {
	seive();
	int n;
	scanf("%d",&n);
	long long res=0;
	int arr[n][n];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			scanf("%d",&arr[i][j]);
			if(j>=i && nt[arr[i][j]]==0) res+=arr[i][j];
		}
	}
	printf("%lld",res);
}
