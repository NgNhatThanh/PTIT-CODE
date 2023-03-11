#include <stdio.h>
#include <math.h>
#include <string.h>

void rev(char n[]) {
	for(int i=0; i<strlen(n)/2; i++) {
		char tmp=n[i];
		n[i]=n[strlen(n)-i-1];
		n[strlen(n)-i-1]=tmp;
	}
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char a[505], b[505];
		gets(a);
		gets(b);
		char res[505];
		if(strlen(a)<strlen(b)) {
			char tp[505];
			strcpy(tp,a);
			strcpy(a,b);
			strcpy(b,tp);
		}
		rev(a);
		rev(b);
		int du=0;
		for(int i=0; i<strlen(a); i++) {
			int tmp=a[i]-48;
			if(i<strlen(b)) tmp+=b[i]-48;
			tmp+=du;
			du=0;
			if(tmp>=10) {
				du+=tmp/10;
				tmp%=10;
			}
			res[i]=tmp+48;
		}
		if(du) {
			res[strlen(a)]=du+48;
			res[strlen(a)+1]='\0';
		} else res[strlen(a)]='\0';
		rev(res);
		int k=0;
		while(res[k]=='0') k++;
		for(int i=k; i<strlen(res); i++) printf("%c",res[i]);
		printf("\n");
	}
}

