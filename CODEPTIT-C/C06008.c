#include <stdio.h>
#include <string.h>

int main() {
	char n[1000];
	gets(n);
	char check[110][110];
	int k=0;
	char *tok = strtok(n," ");
	while(tok!=NULL) {
		strcpy(check[k++],tok);
		tok = strtok(NULL," ");
	}
	for(int i=0; i<k; i++) {
		for(int j=i+1; j<k; j++) {
			if(strcmp(check[i],check[j])==0) check[j][0]='\n';
		}
		if(check[i][0]!='\n') printf("%s ",check[i]);
	}
}