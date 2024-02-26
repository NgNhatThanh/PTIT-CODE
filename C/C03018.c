#include <stdio.h>
#include <math.h>

int fibo[10000]={1,1};

void fb(){
	for(int i=2;i<10000;i++) fibo[i]=fibo[i-1]+fibo[i-2];
}

int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

int chuso(int n){
	int res=0;
	while(n){
		res+=n%10;
		n/=10;
	}
	return res;
}

int check(int n){
	for(int i=0;i<10000;i++){
		if(n==fibo[i]) return 1;
	}
	return 0;
}

int main() {
	fb();
	int a,b;
	scanf("%d%d",&a,&b);
	int tmp=b;
	b=fmax(a,tmp);
	a=fmin(a,tmp);
	for(int i=a;i<=b;i++){
		if(nt(i)==1 && check(chuso(i))) printf("%d ",i);
	}
}


