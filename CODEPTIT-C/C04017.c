#include <stdio.h>
#include <math.h>

int nt[1001];

void sang() {
	nt[1]=1;
	for(int i=2; i<=sqrt(1000); i++) {
		for(int j=i*i; j<=1000; j+=i) nt[j]=1;
	}
}

int main() {
	sang();
	int n;
	int cnt=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		if(nt[arr[i]]==0) cnt++;
	}
	printf("%d ",cnt);
	for(int i=0; i<n; i++) {
		if(nt[arr[i]]==0) printf("%d ",arr[i] );
	}

}