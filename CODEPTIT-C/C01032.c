#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		int res=1;
		for(int i=2; i<=sqrt(n); i++) {
			if(n%i==0) {
				res*=i;
				while(n%i==0) n/=i;
			}
		}
		if(n!=1) res*=n;
		printf("%d\n",res);
	}
}