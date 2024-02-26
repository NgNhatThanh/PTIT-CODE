#include <stdio.h>
#include <string.h>

char a[505], b[505];
char res[505];

void hieu(char a[], char b[]){
	memset(res, '0', sizeof(res));
	if(strlen(a)<strlen(b) || (strlen(a)==strlen(b) && strcmp(a,b)<0)){
		char tmp[505];
		strcpy(tmp, a);
		strcpy(a,b);
		strcpy(b,tmp);
	}
	int i=strlen(a)-1, j=strlen(b)-1;
	int k=0;
	int du=0;
	while(i>=0 || j>=0){
		int cal=a[i]-'0'-du;
		du=0;
		if(j>=0) cal-=(b[j]-'0');
		if(cal<0){
			du=1;
			cal+=10;
		}
		res[k++]=cal+'0';
		--i; --j;
	}
	while(res[k]=='0') --k;
	for(int i=k;i>=0;--i) printf("%c",res[i]);
	printf("\n");
}

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		scanf("%s",a);
		scanf("%s",b);
		hieu(a,b);
	}
}