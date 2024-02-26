#include <stdio.h>
#include <math.h>
#include <string.h>

int check(char n[]) {
	int dau=(int)n[0]-48;
	int cuoi=(int)n[strlen(n)-1]-48;
	if(dau==2*cuoi || cuoi==2*dau) {
		int l=1, r=strlen(n)-2;
		while(l<r) {
			if(n[l]!=n[r]) return 0;
			l++;
			r--;
		}
		return 1;
	}
	return 0;
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char n[20];
		gets(n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}

}