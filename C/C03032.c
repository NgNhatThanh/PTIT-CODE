#include <stdio.h>
#include <math.h>

int check(int n){
	while(n){
		int tmp=n%10;
		if(tmp!=2 && tmp!=3 && tmp!=5 && tmp!=7) return 0;
		n/=10;
	}
	return 1;
}

int nt(int n){
	if(n<1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	} 
	return 1;
}

int main() {
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,cnt=0;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;i++){
			if(check(i)){
				if(nt(i)) cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}


