#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	char n[10000];
	gets(n);
	char check[100][100];
	int k=0;
	char *tok = strtok(n," ");
	while(tok!=NULL) {
		for(int i=0; i<strlen(tok); i++) {
			tok[i]=tolower(tok[i]);
		}
		strcpy(check[k++], tok);
		tok=strtok(NULL, " ");
	}
	for(int i=0; i<k; i++) {
		if(check[i][0]!='@') {
			printf("%s ",check[i]);
			int cnt=1;
			for(int j=i+1; j<k; j++) {
				if(strcmp(check[i],check[j])==0) {
					check[j][0]='@';
					cnt++;
				}
			}
			printf("%d\n",cnt);
		}
	}
}
