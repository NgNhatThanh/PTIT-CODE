#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void process() {
	char n[100];
	gets(n);
	char *tok = strtok(n," ");
	int check=0;
	while(tok!=NULL) {
		char tmp[20];
		for(int i=0; i<strlen(tok); i++) {
			tok[i]=tolower(tok[i]);
		}
		strcpy(tmp,tok);
		tok=strtok(NULL," ");
		if(tok!=NULL) printf("%c",tmp[0]);
		else printf("%s",tmp);
	}
	printf("@ptit.edu.vn\n");
}

int main() {
	process();
}
