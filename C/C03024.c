#include <stdio.h>
#include <math.h>

int chuso(int n){
	int res=0;
	while(n){
		res+=n%10;
		n/=10;
	}
	return res;
}

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if(chuso(b)>=chuso(a)) printf("%d %d",a,b);
	else printf("%d %d",b,a);
}


