#include <stdio.h>
#include <math.h>

int check(long long n){
	int cnt=0;
	while(n){
		int t=n%10;
		if(t!=0 && t!=8 && t!=9 && t!=1) return 0;
		if(t==1) cnt++;
		n/=10;
	}
	return cnt>0;
}

void process(){
	long long n;
	scanf("%lld",&n);
	if(check(n)==0) printf("INVALID\n");
	else{
		long long res=0;
		int k=0;
		while(n){
			long long mu=pow(10,k);
			if(n%10==1) res+=mu;
			k++;
			n/=10;
		}
		printf("%lld\n",res);
	}
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		process();
	}
}