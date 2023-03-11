#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void process() {
	char a[210], b[30];
	gets(a);
	gets(b);
	for(int i=0; i<strlen(b); i++) b[i]=tolower(b[i]);
	char *tok = strtok(a, " ");
	while(tok!=NULL) {
		char tmp[100];
		strcpy(tmp,tok);
		for(int i=0; i<strlen(tok); i++) tok[i]=tolower(tok[i]);
		if(strcmp(tok,b)!=0) printf("%s ",tmp);
		tok=strtok(NULL," ");
	}
	printf("\n");
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	int t=1;
	while(a--) {
		printf("Test %d: ",t);
		t++;
		process();
	}
}
