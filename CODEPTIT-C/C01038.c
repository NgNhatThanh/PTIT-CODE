#include <stdio.h>
#include <string.h>

int main() {
	char n[100];
	gets(n);
	int dai=strlen(n);
	char tmp=n[0];
	n[0]=n[dai-1];
	n[dai-1]=tmp;
	for(int i=(n[0]=='0'); i<dai; i++) printf("%c",n[i]);
}