#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
	char n[60];
	gets(n);
	int dai = strlen(n);
	int luu[60]= {};
	luu[0]=1;
	for(int i=0; i<dai; i++) {
		int max=0;
		for(int j=0; j<i; j++) {
			if(n[i]>n[j] && max<luu[j]) max=luu[j];
		}
		luu[i]=max+1;
	}
	int res=0;
	for(int i=0; i<50; i++) {
		if(luu[i]>res) res=luu[i];
	}
	printf("%d",26-res);
}
