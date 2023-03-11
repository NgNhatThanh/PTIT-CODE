#include <stdio.h>
#include <string.h>

int main() {
	char n[1000];
	gets(n);
	int chu=0, so=0, khac=0;
	for(int i=0;i<strlen(n);i++){
		if((n[i]>='a' && n[i]<='z') || (n[i]>='A' && n[i]<='Z')) chu++;
		else if(n[i]>='0' && n[i]<='9') so++;
		else khac++;
	}
	printf("%d %d %d",chu,so,khac);
}