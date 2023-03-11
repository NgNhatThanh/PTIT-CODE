#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		int n;
		scanf("%d",&n);
		int res=0;
		int can=sqrt(n);
		for(int i=1;i<=can;i++){
			if(n%i==0){
				if(i%2==0) res++;
				if((n/i)%2==0 && (n/i)!=i) res++;
			}
		}
		printf("%d\n",res);
	}
}