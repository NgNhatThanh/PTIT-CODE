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
		int a;
		scanf("%d",&a);
		for(int i=2;i<=a/2;i++){
			if(nt[i]==0 && nt[a-i]==0) printf("%d %d ",i,a-i);
		}
		printf("\n");
	}
}