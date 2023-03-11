#include <stdio.h>
#include <math.h>

int fibo[10000]={0,1,1};

void fb(){
	for(int i=2;i<10000;i++) fibo[i]=fibo[i-1]+fibo[i-2];
}

int main() {
	fb();
	int n;
	scanf("%d",&n);
	int k=0;
	while(k<n){
		printf("%d ",fibo[k++]);
	}
}


