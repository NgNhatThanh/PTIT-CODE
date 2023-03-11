#include <stdio.h>
#include <math.h>
#include <string.h>

char in[205];

void rev(char n[]) {
	for(int i=0; i<strlen(n)/2; i++) {
		char tmp=n[i];
		n[i]=n[strlen(n)-i-1];
		n[strlen(n)-i-1]=tmp;
	}
}

void copya(char a[]){
	int k=0;
	for(int i=0;i<strlen(in)/2;i++){
		a[k++]=in[i];
	}
	a[k]='\0';
}

void copyb(char b[]){
	int k=0;
	for(int i=strlen(in)/2;i<strlen(in);i++){
		b[k++]=in[i];
	}
	b[k]='\0';
}

void sum(char a[], char b[]) {
	char res[505];
	if(strlen(a)<strlen(b)) {
		char tp[505];
		strcpy(tp,a);
		strcpy(a,b);
		strcpy(b,tp);
	}
	rev(a);
	rev(b);
	if(strlen(a)==strlen(b)){
		if(b[strlen(b)-1]=='0') b[strlen(b)-1]='\0';
	}
	else{
		if(a[strlen(a)-1]=='0') a[strlen(a)-1]='\0';
	}
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
	strcpy(in,res);
}

int main() {
	gets(in);
	while(strlen(in)>1){
		char a[110], b[110];
		copya(a); copyb(b);
		sum(a,b);
		printf("%s\n",in);
	}
}