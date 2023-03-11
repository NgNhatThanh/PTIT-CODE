#include <stdio.h>
#include <math.h>
#include <string.h>

int nt(int n) {
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

int check(int n) {
	int res=0;
	while(n) {
		res+=n%10;
		n/=10;
	}
	return res%5==0;
}

int main() {
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=5; i<n; i++) {
		if(check(i) && nt(i)) {
			printf("%d ",i);
			cnt++;
		}
	}
	printf("\n%d",cnt);
}
