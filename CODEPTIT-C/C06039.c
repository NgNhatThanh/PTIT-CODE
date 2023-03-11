#include <stdio.h>
#include <string.h>
#include <math.h>

char xoay[55][55];

int kt[55]= {1};

int k=0;

void xoayvong(char s[]) { // Sinh ra cac xau xoay vong cua s
	strcpy(xoay[k++], s);
	int dai =strlen(s);
	while(k<dai) {
		char tam=s[0];
		for(int i=0; i<dai-1; i++) {
			s[i]=s[i+1];
		}
		s[dai-1]=tam;
		strcpy(xoay[k++], s);
	}
}

int max=-1;

int maxgt=0;

int imax=-1;

int check(char s[]) {
	int dai = strlen(s);
	for(int i=0; i<dai; i++) {
		if(strcmp(s, xoay[i])==0) {
			kt[i]++;
			if(kt[i]>=maxgt) {
				maxgt=kt[i];
				imax=i;
			}
			if(i>max) max=i;
			return 1;
		}
	}
	return 0;
}

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	char s[55];
	gets(s);
	xoayvong(s);
	int cnt=0;
	for(int i=1; i<n; i++) {
		char tmp[60];
		gets(tmp);
		if(!check(tmp)) {
			cnt++;
		}
	}
	if(cnt) {
		printf("-1");
	} else {
		int dai = strlen(s);
		int max=10000000;
		for(int i=0; i<dai; i++) {
			if(kt[i]) {
				int res=0;
				for(int j=0; j<i; j++) {
					res+=kt[j]*(i-j);
				}
				for(int j=i+1; j<dai; j++) {
					res+=kt[j]*(dai-(j-i));
				}
				if(res<max) max=res;
			}
		}
		printf("%d",max);
	}
}