#include <stdio.h>
#include <string.h>

int  check(char n[]){
	for(int i=0;i<strlen(n);i++){
		if(n[i]!='0' && n[i]!='1' && n[i]!='2') return 0;
	}
	return 1;
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--){
		char n[20];
		gets(n);
		check(n) ? printf("YES\n") : printf("NO\n");
	}
}