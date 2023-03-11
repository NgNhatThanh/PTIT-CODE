#include <stdio.h>
#include <math.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		if(sqrt(n)==(int)sqrt(n)) printf("YES\n");
		else printf("NO\n");
	}


}