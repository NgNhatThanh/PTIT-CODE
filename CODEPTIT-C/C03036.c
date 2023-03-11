#include <stdio.h>
#include <math.h>
#include <string.h>

int tn(long long n) {
	char tmp[100];
	sprintf(tmp,"%lld",n);
	int l=0, r=strlen(tmp)-1;
	while(l<r) {
		if(tmp[l]!=tmp[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int le(long long n) {
	int res=0;
	while(n) {
		res+=n%10;
		n/=10;
	}
	return res%2;
}

int le2(long long n) {
	while(n) {
		if((n%10)%2==0) return 0;
		n/=10;
	}
	return 1;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		long long n;
		scanf("%lld",&n);
		if(tn(n) && le(n) && le2(n)) printf("YES\n");
		else printf("NO\n");
	}
}