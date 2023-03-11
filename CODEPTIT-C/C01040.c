#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int res=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0) res+=i;
	}
	printf("%d",res==n);
}