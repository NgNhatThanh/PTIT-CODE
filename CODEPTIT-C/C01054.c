#include <stdio.h>
#include <math.h>

int nt[2000006];

void sang() {
	nt[1]=1;
	for(int i=2; i<=sqrt(2000005); i++) {
		for(int j=i*i; j<=2000005; j+=i) nt[j]=1;
	}
}

int main() {
	sang();
	int a;
	scanf("%d",&a);
	long long res=0;
	while(a--) {
		int n;
		scanf("%d",&n);
		for(int i=2; i<=sqrt(n); i++) {
			if(i>n || nt[n]==0) break;
			while(n%i==0) {
				res+=i;
				n/=i;
			}
		}
		if(n!=1) res+=n;
	}
	printf("%lld",res);
}
