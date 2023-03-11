#include <stdio.h>
#include <math.h>
#include <string.h>

int check(int n) {
	int res=0;
	while(n) {
		res+=n%10;
		n/=10;
	}
	return (res*2)%10==0;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		int tmp=n/2;
		int dau =pow(10,tmp-1);
		int cuoi=pow(10,tmp)-1;
		int cnt=0;
		for(int i=dau; i<=cuoi; i++) {
			if(check(i)) cnt++;
		}
		if(n%2) cnt*=5;
		printf("%d\n",cnt);
	}
}
