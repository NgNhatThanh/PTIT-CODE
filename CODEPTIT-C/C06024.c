#include <stdio.h>
#include <string.h>

char a[505], b[505];
char res[505];

void tong(char a[], char b[]){
	if(strlen(a)<strlen(b)){
		char tmp[505];
		strcpy(tmp, a);
		strcpy(a,b);
		strcpy(b,tmp);
	}
	int i=strlen(a)-1, j=strlen(b)-1;
	int k=0;
	int du=0;
	while(i>=0 || j>=0){
		int sum=du+a[i]-'0';
		du=0;
		if(j>=0) sum+=b[j]-'0';
		if(sum>9){
			du=1;
			sum-=10;
		}
		res[k++]=sum+'0';
		--i; --j;
	}
	if(du) res[k++]=du+'0';
	for(int i=k-1;i>=0;--i) printf("%c",res[i]);
	printf("\n");
}

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		fgets(a, 505, stdin);
		fgets(b, 505, stdin);
		a[strlen(a)-1]='\0';
		b[strlen(b)-1]='\0';
		tong(a,b);
	}
}