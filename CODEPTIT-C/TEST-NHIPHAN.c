#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d",&n);
	if(!n) printf("0");
	else {
		long long res=0;
		int k=0;
		while(n){
			int sum=pow(10,k);
			res+=(n%2)*sum;
			n/=2;
			k++;
		}
		printf("%lld",res);
	}
}
