#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void process() {
	char n[1010];
	gets(n);
	int check[10]= {};
	for(int i=0; i<strlen(n); i++) {
		if(n[i]<'0' || n[i]>'9' || n[0]=='0') {
			printf("INVALID\n");
			return;
		} else {
			check[n[i]-48]++;
		}
	}
	for(int i=0; i<=9; i++) {
		if(!check[i]) {
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		process();
	}
}
