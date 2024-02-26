#include <stdio.h>
#include <math.h>

int chuso(int n) {
	int res=0;
	while(n) {
		res+=n%10;
		n/=10;
	}
	return res;
}

int nt(int n) {
	int res=0;
	for(int i=2; i<=sqrt(n); i++) {
		while(n%i==0) {
			res+=chuso(i);
			n/=i;
		}
	}
	if(n!=1) res+=chuso(n);
	return res;
}

int main() {
	int n;
	scanf("%d",&n);
	if(chuso(n)==nt(n)) printf("YES");
	else printf("NO");
}