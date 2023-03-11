#include <stdio.h>
#include <math.h>

int check(int a) {
	for(int i=2; i<=sqrt(a); i++) {
		if(a%i==0) return 0;
	}
	return 1;
}

int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		int a;
		scanf("%d",&a);
		if(check(a)) printf("YES\n");
		else printf("NO\n");
	}


}