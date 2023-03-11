#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int tam(char n[]) {
	for(int i=6; i<12; i++) {
		if(n[i]!='.') {
			if(n[i]!='6' && n[i]!='8') return 0;
		}
	}
	return 1;
}

int bang(char n[]) {
	if(n[6]==n[7] && n[6]==n[8] && n[10]==n[11]) return 1;
	return 0;
}

int tang(char n[]) {
	for(int i=6; i<11; i++) {
		if(n[i]!='.') {
			if(n[i+1]=='.') {
				if(n[i+2]<=n[i]) return 0;
			} else {
				if(n[i+1]<=n[i]) return 0;
			}
		}
	}
	return 1;
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char n[20];
		gets(n);
		if(tang(n) || tam(n) || bang(n)) printf("YES\n");
		else printf("NO\n");
	}
}
