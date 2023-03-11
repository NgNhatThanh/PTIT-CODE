#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		int a;
		int sum=0;
		scanf("%d",&a);
		while(a) {
			sum+=a%10;
			a/=10;
		}
		printf("%d\n",sum);
	}
}