#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int chan=0, le=0;
	while(n){
		if((n%10)%2) le++;
		else chan++;
		n/=10;
	}
	printf("%d %d",le, chan);
}