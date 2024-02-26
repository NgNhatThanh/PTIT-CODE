#include <stdio.h>
#include <string.h>

char n[205];

void ncpy(char des[], int st, int end){
	int i=0;
	for(int j=st;j<=end;++j) des[i++]=n[j];
	des[i]='\0';
}

void rev(){
	int l=0, r=strlen(n)-1;
	while(l<r){
		char tmp=n[l];
		n[l]=n[r];
		n[r]=tmp;
		++l; --r;
	}
}

void tong(char a[], char b[]){
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
		n[k++]=sum+'0';
		--i; --j;
	}
	if(du) n[k++]=du+'0';
	n[k]='\0';
	rev();
}

int main(){
	fgets(n, 205, stdin);
	n[strlen(n)-1]='\0';
	while(strlen(n)>1){
		char firstPart[105], secondPart[105];
		ncpy(firstPart, 0, strlen(n)/2-1);
		ncpy(secondPart, strlen(n)/2, strlen(n)-1);
		tong(secondPart, firstPart);
		printf("%s\n",n);
	}
}