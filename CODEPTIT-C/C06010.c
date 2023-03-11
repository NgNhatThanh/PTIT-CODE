#include <stdio.h>
#include <string.h>

int check(char n[]) {
	int l=0, r=strlen(n)-1;
	while(l<r) {
		if(n[l]!=n[r]) return 0;
		if((n[l]-48)%2 || (n[r]-48)%2) return 0;
		l++;
		r--;
	}
	return 1;
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char n[510];
		gets(n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}