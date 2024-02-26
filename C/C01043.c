#include <stdio.h>

int gt(int n){
	int res=1;
	for(int i=1;i<=n;i++) res*=i;
	return res;
}

int main() {
	int n;
	scanf("%d",&n);
	int tmp=n;
	int res=0;
	while(n){
		res+=gt(n%10);
		n/=10;
	}
	printf("%d",res==tmp);

}