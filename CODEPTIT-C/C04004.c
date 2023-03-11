#include <stdio.h>
#include <math.h>

long long fibo[100]={1,1};

void fb(){
	for(int i=2;i<100;i++) fibo[i]=fibo[i-1]+fibo[i-2];
}

int main() {
	fb();
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		printf("%lld\n",fibo[n-1]);
	}
}