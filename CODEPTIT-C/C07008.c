#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char m[100005];
		char n[100005];
		gets(m);
		char *tokm = strtok(m, " +x*^");
		int mu[10005]= {};
		int hs[10005]= {};
		int max=0;
		int gium=atoi(tokm);
		tokm=strtok(NULL," +x*^");
		while(1) {
			int tmp=atoi(tokm);
			if(tmp>max) max=tmp;
			hs[tmp]+=gium;
			mu[tmp]++;
			tokm=strtok(NULL," *x^+");
			if(tokm==NULL) break;
			gium=atoi(tokm);
			tokm=strtok(NULL," *x^+");
		}
		gets(n);
		char *tokn = strtok(n," +x*^");
		int giun=atoi(tokn);
		tokn = strtok(NULL, " +x*^");
		while(1) {
			int tmp=atoi(tokn);
			if(tmp>max) max=tmp;
			hs[tmp]+=giun;
			mu[tmp]=1;
			tokn=strtok(NULL," *x^+");
			if(tokn==NULL) break;
			giun=atoi(tokn);
			tokn=strtok(NULL," *x^+");
		}
		int cnt=0;
		for(int i=max; i>=0; i--) {
			if(mu[i]>0) cnt++;
		}
		for(int i=max; i>=0; i--) {
			if(mu[i]>0) {
				printf("%d*x^%d",hs[i],i);
				cnt--;
				if(cnt) printf(" + ");
			}

		}
		printf("\n");
	}
}

