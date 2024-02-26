#include <stdio.h>
#include <string.h>

char inp[55][55];

int xoay(char a[], char b[]){// dem so lan cay xoay de xau a thanh xau b, neu khong xoay duoc thi return -1
	int cnt=0;
	int i=0;
	while(1){
		char xoay[55];
		int k=0;
		for(int j=i;j<strlen(a);++j) xoay[k++]=a[j];
		for(int z=0;z<i;++z) xoay[k++]=a[z]; 
		if(strcmp(xoay,a)==0 && cnt>0) return -1;
		if(strcmp(xoay, b)==0) return cnt;
		++cnt;
		++i;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%s",inp[i]);
	}
	int res=1e9;
	for(int i=0;i<n;++i){
		int cnt=0;
		for(int j=0;j<n;++j){
			if(j!=i){
				int add=xoay(inp[j], inp[i]);
				if(add==-1){
					printf("-1");
					return 0;
				}
				cnt+=add;
			}
		}
		res=fmin(res, cnt);
	}
	printf("%d",res);
}