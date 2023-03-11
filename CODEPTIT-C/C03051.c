#include <stdio.h>
#include <math.h>

int nt[1000001];

void seive(){
	nt[1]=1;
	for(int i=2;i<=sqrt(1000000);i++){
		for(int j=i*i;j<=1000000;j+=i) nt[j]=1;
	}
}

int main() {
	seive();
	int n;
	scanf("%d",&n);
	while(n--){
		long long a,b;
		int res=0;
		scanf("%lld%lld",&a,&b);
		int can=sqrt(b);
		for(int i=a;i<=can;i++){
			if(nt[i]==0) res++;
		}
		printf("%d\n",res);
	}
}