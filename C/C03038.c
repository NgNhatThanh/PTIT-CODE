#include <stdio.h>
#include <math.h>

int legendre(int n, int k){// cong thuc legendre
	int i=1;
	int res=0;
	while(1){
		int tmp=pow(k,i);
		res+=n/tmp;
		if(n/tmp<=1) break;
		++i;
	}
	return res;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		printf("%d\n",legendre(n,k));	
	}
}