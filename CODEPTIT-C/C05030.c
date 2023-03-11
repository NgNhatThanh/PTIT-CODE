#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int m,n;
		scanf("%d%d",&m,&n);
		getchar();
		int hang1[1001]= {};
		int cot1[1001]= {};
		int hang2[1001]= {};
		int cot2[1001]= {};
		char s[1002][1002];
		for(int i=0; i<m; i++) {
			gets(s[i]);
			for(int j=0; j<n; j++) {
				if(s[i][j]=='2') {
					hang2[i]++;
					cot2[j]++;
				} else if(s[i][j]=='1') {
					hang1[i]++;
					cot1[j]++;
				}
			}
		}
		long long res=0;
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				if(s[i][j]=='1') res+=hang2[i]*cot2[j];
				else if(s[i][j]=='2') res+=hang1[i]*cot1[j];
			}
		}
		printf("%lld\n",res);
	}
}

