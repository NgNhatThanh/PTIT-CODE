#include <stdio.h>
#include <math.h>
#include <string.h>

int check(char n[]) {
	int l=0, r=strlen(n)-1;
	while(l<r) {
		if(n[l]!=n[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int main() {
	char n[100];
	char luu[1001][20];
	int max=0;
	int k=0;
	while(scanf("%s",&n)!=-1) {
		getchar();
		if(check(n)) {
			if(strlen(n)>max) {
				k=0;
				max=strlen(n);
				strcpy(luu[k++], n);
			} else if(strlen(n)==max) strcpy(luu[k++], n);
		}
	}
	for(int i=0; i<k; i++) {
		if(luu[i][0]!='\0') {
			int cnt=1;
			for(int j=i+1; j<k; j++) {
				if(strcmp(luu[i], luu[j])==0) {
					cnt++;
					luu[j][0]='\0';
				}
			}
			printf("%s %d\n",luu[i],cnt);
		}
	}
}

