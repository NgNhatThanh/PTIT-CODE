#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		int a;
		scanf("%d",&a);
		int res=a%10;
		int tmp;
		while(a) {
			tmp=a%10;
			a/=10;
		}
		tmp==res ? printf("YES\n") : printf("NO\n");
	}


}