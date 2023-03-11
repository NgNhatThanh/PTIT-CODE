#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void process() {
	char n[100];
	gets(n);
	char *tok = strtok(n," ");
	while(tok!=NULL) {
		tok[0]=toupper(tok[0]);
		for(int i=1; i<strlen(tok); i++) {
			tok[i]=tolower(tok[i]);
		}
		printf("%s ",tok);
		tok=strtok(NULL," ");
	}
	printf("\n");
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		process();
	}
}
