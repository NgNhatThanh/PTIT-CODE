#include <stdio.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char n[1000];
		gets(n);
		int cnt=0;
		char *tok = strtok(n," ");
		while(tok!=NULL){
			cnt++;
			tok = strtok(NULL, " " );
		}
		printf("%d\n",cnt);
	}
}