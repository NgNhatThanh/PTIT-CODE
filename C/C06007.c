#include <stdio.h>
#include <string.h>

int main() {
	char n[1000];
	gets(n);
	char bo[110];
	gets(bo);
	char *tok = strtok(n," ");
	while(tok!=NULL) {
		if(strcmp(tok,bo)!=0) printf("%s ",tok);
		tok = strtok(NULL," ");
	}
}