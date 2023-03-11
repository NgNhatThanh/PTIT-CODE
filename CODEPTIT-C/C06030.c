#include <stdio.h>
#include <math.h>
#include <string.h>

char luu[1001][10];

int main() {
	char n[10];
	int max=0;
	int k=0;
	while(scanf("%s",&n)!=-1) {
		getchar();
		if(strlen(n)>max) {
			max=strlen(n);
			k=0;
			strcpy(luu[k++], n);
		} else if(strlen(n)==max)  strcpy(luu[k++], n);
	}
	for(int i=0; i<k; i++) {
		if(luu[i][0]!='\0') {
			int cnt=1;
			for(int j=i+1; j<k; j++) {
				if(strcmp(luu[i], luu[j])==0) {
					luu[j][0]='\0';
					cnt++;
				}
			}
			printf("%s %d %d\n",luu[i], strlen(luu[i]), cnt);
		}
	}
}

