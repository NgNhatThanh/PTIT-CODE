#include <stdio.h>
#include <math.h>
#include <string.h>

int nt[101];

void sang() {
	nt[1]=1;
	for(int i=2; i<=10; i++) {
		for(int j=i*i; j<=100; j+=i) nt[j]=1;
	}
}

int main() {
	sang();
	int a;
	scanf("%d",&a);
	while(a--) {
		int n,m;
		int check[101]= {};
		scanf("%d%d",&n,&m);
		for(int i=n; i<=m; i++) {
			int tmp=i;
			for(int j=2; j<=sqrt(i); j++) {
				int max=0;
				while(tmp%j==0) {
					tmp/=j;
					max++;
				}
				if(max>check[j]) check[j]=max;
			}
			if(tmp!=1) {
				if(check[tmp]<1) check[tmp]=1;
			}
		}
		long long res=1;
		for(int i=2; i<=100; i++) {
			if(check[i]) {
				long long add=pow(i,check[i]);
				res*=add;
			}
		}
		printf("%lld\n",res);
	}
}

