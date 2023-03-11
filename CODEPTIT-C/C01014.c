#include <stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==0){
		if(b) printf("Vo nghiem");
		else printf("Vo so nghiem");
	}
	else printf("%.2f",1.0*-b/a);
}