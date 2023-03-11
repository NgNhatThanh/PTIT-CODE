#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void process() {
	char n[100];
	gets(n);
	char *tok = strtok(n," ");
	char ho[20];
	int check=0;
	while(tok!=NULL) {
		tok[0]=toupper(tok[0]);
		if(!check) {
			for(int i=1; i<strlen(tok); i++) {
				tok[i]=toupper(tok[i]);
			}
			strcpy(ho,tok);
		} else {
			for(int i=1; i<strlen(tok); i++) {
				tok[i]=tolower(tok[i]);
			}
		}
		if(check) printf("%s",tok);
		tok=strtok(NULL," ");
		if(tok!=NULL && check) printf(" ");
		check++;
	}
	printf(", %s",ho);
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
