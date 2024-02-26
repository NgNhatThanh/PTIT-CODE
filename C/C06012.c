#include <stdio.h>
#include <string.h>

char nt[]= {'2','3','5','7'};

int cnt(char n) {
	for(int i=0; i<4; i++) {
		if(n==nt[i]) return 1;
	}
	return 0;
}

int check(char n[]) {
	int l=0, r=strlen(n)-1;
	while(l<=r) {
		if(n[l]!=n[r]) return 0;
		if(!cnt(n[l])) return 0;
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