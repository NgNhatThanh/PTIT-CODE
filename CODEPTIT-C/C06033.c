#include <stdio.h>
#include <string.h>
#define ll long long
#include <ctype.h>

void process(int n) {
	char s1[202], s2[202], res[404];
	gets(s1);
	gets(s2);
	gets(res);
	char tmp[404];
	int k1=0, k2=0;
	for(int i=0; i<2*n; i++) {
		if(i%2==0) tmp[i]=s2[k2++];
		else tmp[i]=s1[k1++];
	}
	tmp[2*n]='\0';
	int cnt=1;
	char mau[404];
	strcpy(mau, tmp);
	while(1) {
		if(strcmp(tmp, res)==0) break;
		cnt++;
		for(int i=0; i<n; i++) {
			s1[i]=tmp[i];
		}
		for(int i=n; i<2*n; i++) {
			s2[i-n]=tmp[i];
		}
		int t1=0, t2=0;
		for(int i=0; i<2*n; i++) {
			if(i%2==0) tmp[i]=s2[t2++];
			else tmp[i]=s1[t1++];
		}
		if(strcmp(tmp, mau)==0) break;
	}
	if(strcmp(tmp,mau)==0 && cnt) printf("-1\n");
	else printf("%d\n",cnt);
}

int main() {
	int n;
	while(scanf("%d",&n)!=-1) {
		getchar();
		if(n==0) return 0;
		process(n);
	}
}