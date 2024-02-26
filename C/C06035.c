#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void process() {
	char n[30];
	gets(n);
	int l=0, r=strlen(n)-1, cnt=0;
	while(l<r) {
		if(n[l]!=n[r]) cnt++;
		l++;
		r--;
	}
	if(cnt>1) printf("NO\n");
	else {
		if(cnt==0) {
			if(strlen(n)%2) printf("YES\n");
			else printf("NO\n");
		} else printf("YES\n");
	}
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		process();
	}
}
