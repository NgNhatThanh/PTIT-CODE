#include <stdio.h>
#include <math.h>
#include <string.h>

int check(int n) {
	if(n<2) return 0;
	if(n==2 || n==3) return 1;
	if(n%2==0 || n%3==0) return 0;
	for(int i=5; i<=sqrt(n); i+=6) {
		if(n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;

}

int checknt(int n) {
	int sum=0;
	while(n) {
		int t=n%10;
		if(t!=2 && t!=3 && t!=5 && t!=7) return 0;
		sum+=t;
		n/=10;
	}
	return check(sum);
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int m,n;
		int res=0;
		scanf("%d%d",&m,&n);
		for(int i=m; i<=n; i++) {
			if(checknt(i)) {
				if(check(i)) res++;
			}
		}
		printf("%d\n",res);
	}
}

