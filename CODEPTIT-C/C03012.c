#include <stdio.h>
#include <math.h>

int fibo[10000]= {1,1};

void fb() {
	for(int i=2; i<10000; i++) fibo[i]=fibo[i-1]+fibo[i-2];
}

int check(int n) {
	for(int i=0; i<10000; i++) {
		if(n==fibo[i]) return 1;
	}
	return 0;
}

int main() {
	fb();
	int n;
	scanf("%d",&n);
	printf("%d",check(n));
}


