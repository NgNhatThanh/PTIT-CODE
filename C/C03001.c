#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		int res=0;
		while(n) {
			res+=n%10;
			n/=10;
		}
		if(res%10) printf("NO\n");
		else printf("YES\n");
	}
}
