#include <stdio.h>
#include <string.h>

int check(char n[]){
	for(int i=1;i<strlen(n);i++){
		if(n[i]<n[i-1]) return 0;
	}
	return 1;
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--){
		char n[100];
		gets(n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}