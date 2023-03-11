#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		double n;
		scanf("%lf", &n);
		printf("%.15lf\n", 1.0/n);
	}
	
}