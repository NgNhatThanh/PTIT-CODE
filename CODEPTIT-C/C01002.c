#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",2*n);
	}
}