#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=2;i<=a;i++){
		if(b<=0){
			printf("Yes");
			return 0;
		}
		int tmp=i;
		while(tmp%2==0){
			b--;
			tmp/=2;
		}
	} 
	if(b<=0) printf("Yes");
	else printf("No");
}