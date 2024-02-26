#include <stdio.h>
#include <math.h>
#include <string.h>

int nt[1001];

void seive() {
	nt[1]=1;
	for(int i=2; i<=sqrt(1000); i++) {
		for(int j=i*i; j<=1000; j+=i) nt[j]=1;
	}
}

int main() {
	seive();
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int tmp=0;
	int hang=0;
	for(int i=0; i<n; i++) {
		int check=0;
		for(int j=0; j<n; j++) {
			scanf("%d",&arr[i][j]);
			if(nt[arr[i][j]]==0) check++;
		}
		if(check>tmp) {
			tmp=check;
			hang=i+1;
		}
	}
	printf("%d\n",hang);
	for(int i=0; i<n; i++) {
		if(nt[arr[hang-1][i]]==0) printf("%d ",arr[hang-1][i]);
	}
}
