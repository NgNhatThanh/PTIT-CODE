#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void process() {
	char n[1010];
	gets(n);
	int le=0;
	int chan=0;
	for(int i=0; i<strlen(n); i++) {
		if(n[i]<'0' || n[i]>'9' || n[0]=='0') {
			printf("INVALID\n");
			return;
		} else {
			if((n[i]-48)%2) le++;
			else chan++;
		}
	}
	int dai=strlen(n);
	if((dai%2 && le>chan) || (dai%2==0 && chan>le)) printf("YES\n");
	else printf("NO\n");
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		process();
	}
}
