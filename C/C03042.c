#include <stdio.h>

int check(int n){
	int tmp=n%10;
	n/=10;
	while(n){
		if(tmp>=n%10) return 0;
		tmp=n%10;
		n/=10;
	}
	return 1;
}

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		int m,n;
		scanf("%d%d",&m,&n);
		int res=0;
		for(int i=m;i<=n;i++){
			if(check(i)) res++;
		}
		printf("%d\n",res);
	}
}