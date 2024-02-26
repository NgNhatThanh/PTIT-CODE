#include <stdio.h>
#include <math.h>

int gt(int n){
	int res=1;
	for(int i=1;i<=n;i++) res*=i;
	return res;
}

int check(int n){
	int res=0;
	int tmp=n;
	while(n){
		res+=gt(n%10);
		n/=10;
	}
	return res==tmp;
}

int main() {
	int n;
	scanf("%d",&n);
	if(n>40585) printf("1 2 145 40585"); // 4 so Strong thoa man de bai
	else{
		for(int i=1;i<=n;i++){
		if(check(i)) printf("%d ",i);
	}
}

}
