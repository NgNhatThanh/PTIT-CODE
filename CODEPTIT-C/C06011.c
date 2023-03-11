#include <stdio.h>
#include <string.h>

int check(char n[]) {
	int l=0, r=strlen(n)-1;
	if(n[l]!='8' || n[r]!='8') return 0;
	int res=0;
	while(l<=r) {
		if(n[l]!=n[r]) return 0;
		res+=2*(n[l]-48);
		if(l==r) res-=(n[l]-48);
		l++;
		r--;
	}
	return res%10==0;
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