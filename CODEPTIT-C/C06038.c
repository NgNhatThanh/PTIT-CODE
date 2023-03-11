#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void rev(char n[]) {
	for(int i=0; i<strlen(n)/2; i++) {
		char tmp=n[i];
		n[i]=n[strlen(n)-i-1];
		n[strlen(n)-i-1]=tmp;
	}
}

void xoayvong(char n[], char check[][65]) {
	int k=0;
	char tmp[100];
	strcpy(tmp,n);
	strcpy(check[k++], tmp);
	int dai =strlen(n);
	while(k<dai) {
		char tam=tmp[0];
		for(int i=0; i<dai-1; i++) {
			tmp[i]=tmp[i+1];
		}
		tmp[dai-1]=tam;
		strcpy(check[k++], tmp);
	}
}

int ck(char n[], char check[][65], int k) {
	for(int i=0; i<k; i++) {
		if(strcmp(n, check[i])==0) return 1;
	}
	return 0;
}

void tong(char a[], char b[], char res[], int n) {
	rev(a);
	rev(b);
	int du=0;
	if(strlen(a)<strlen(b)) {
		char tp[505];
		strcpy(tp,a);
		strcpy(a,b);
		strcpy(b,tp);
	}
	int dai1=strlen(a);
	int dai2=strlen(b);
	for(int i=0; i<dai1; i++) {
		int tmp=a[i]-48;
		if(i<dai2) tmp+=b[i]-48;
		tmp+=du;
		du=0;
		if(tmp>=10) {
			du+=tmp/10;
			tmp%=10;
		}
		res[i]=tmp+48;
	}
	if(du) {
		res[dai1]=du+48;
		res[dai1+1]='\0';
	} else res[dai1]='\0';
	if(res[dai1-1]=='0' && strlen(res)>n) res[dai1-1]='\0';
	rev(res);
}

void nhan(char a[], char b, char res[], int check) {
	if(check) res[0]='0';
	int k=check;
	int hs=b-48;
	char tam[100];
	strcpy(tam,a);
	int dai1=strlen(tam);
	int du=0;
	for(int i=dai1-1; i>=0; i--) {
		int tmp=tam[i]-48;
		int xet=tmp*hs;
		xet+=du;
		du=0;
		if(xet>=10) {
			du+=(xet)/10;
			res[k++]=(xet)%10+48;
		} else res[k++]=(xet)%10+48;
	}
	if(du) res[k++]=du+48;
	res[k]='\0';
	rev(res);
}

void process() {
	char n[65];
	gets(n);
	char check[65][65];
	xoayvong(n, check);
	int dai=strlen(n);
	for(int i=1; i<=dai; i++) {
		char tmp[4];
		sprintf(tmp, "%d", i);
		char res1[70], res2[70], res[66];
		if(i<10) {
			nhan(n, tmp[0], res1,0);
			if(ck(res1, check, dai)==0) {
				printf("NO\n");
				return;
			}
		} else {
			nhan(n, tmp[1], res1, 0);
			nhan(n, tmp[0], res2, 1);
			tong(res1, res2, res, dai);
			if(ck(res, check, dai)==0) {
				printf("NO\n");
				return ;
			}
		}
	}
	printf("YES\n");

}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		process();
	}
}