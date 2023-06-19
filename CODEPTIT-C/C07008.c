#include <stdio.h>
#include <string.h>

int maxmu;
int bac[10005];

void process(char a[]) {
	int k=0;
	char *tok = strtok(a, " *x^+");
	int heso, mu;
	while(tok!=NULL) {
		mu=atoi(tok);
		if(k==1) maxmu=fmax(maxmu, mu);
		if(k%2) {
			bac[mu]+=heso;
		}
		++k;
		heso=mu;
		tok = strtok(NULL," *x^+");
	}
}

int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		maxmu=0;
		memset(bac, 0, sizeof(bac));
		char s1[10000], s2[10000];
		gets(s1);
		gets(s2);
		process(s1);
		process(s2);
		printf("%d*x^%d", bac[maxmu], maxmu);
		for(int i=maxmu-1; i>=0; --i) {
			if(bac[i]) printf(" + %d*x^%d", bac[i], i);
		}
		printf("\n");
	}
}