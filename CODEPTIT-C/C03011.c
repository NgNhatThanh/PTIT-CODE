#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int tmp=b;
	b=fmax(a,tmp);
	a=fmin(a,tmp);
	if(b>40585) b=40585;
	for(int i=a;i<=b;i++){
		if(i==1 || i==2 || i==145 || i==40585) printf("%d ",i);// 4 so Strong thoa man de bai
	}
}


