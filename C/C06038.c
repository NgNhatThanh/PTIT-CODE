#include <stdio.h>
#include <string.h>
#include <math.h>

char n[65];
int len;
char kqnhan[150];

int check(char a[], char b[]) { // kiem tra xem co the xoay vong xau sau khi nhan ve xau ban dau hay khong
	int i=1;
	while(1) {
		int k=0;
		char tmp[65];
		for(int j=i; j<strlen(a); ++j) tmp[k++]=a[j];
		for(int j=0; j<i; ++j) tmp[k++]=a[j];
		tmp[k]='\0';
		++i;
		if(strcmp(tmp, a)==0) return 0;
		if(strcmp(tmp, b)==0) return 1;
	}
}

void rev(char a[]) {
	int l=0, r=strlen(a)-1;
	while(l<r) {
		char tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		++l;
		--r;
	}
}

void nhan(char a[], char b[]) {
	int res[150]= {};
	rev(a), rev(b);
	int bien=0;
	for(int i=0; i<strlen(a); ++i) {
		for(int j=0; j<strlen(b); ++j) {
			res[i+j]+=(a[i]-'0')*(b[j]-'0');
			if(res[i+j]>9) {
				bien=fmax(bien, i+j+1);
				res[i+j+1]+=res[i+j]/10;
				res[i+j]%=10;
			}
			bien=fmax(bien, i+j);
		}
	}
	if(bien+1>len) {
		while(res[bien]==0) --bien;
	}
	int l=0;
	for(int i=bien; i>=0; --i) {
		kqnhan[l++]=res[i]+'0';
	}
	kqnhan[l]='\0';

}

void process() {
	scanf("%s",n);
	len=strlen(n);
	for(int i=2; i<=len; ++i) {
		char i_str[65];
		sprintf(i_str, "%d", i);// chuyen chu thanh xau
		char tmp[65];
		strcpy(tmp, n);
		nhan(tmp, i_str);
		if(!check(kqnhan, n)) {
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		process();
	}
}