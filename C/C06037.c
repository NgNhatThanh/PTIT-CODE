#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char n[66];
	gets(n);
	int dai=strlen(n);
	int res=0;
	for(int i=0; i<dai; i++) {
		int l=i, r=-1;
		for(int j=i+1; j<dai; j++) {
			if(n[j]==n[i]) {
				r=j;
				break;
			}
		}
		if(r==-1 || r==l+1) continue;
		int check[100]= {};
		for(int j=l+1; j<r; j++) {
			check[n[j]]++;
		}
		for(int j=65; j<95; j++) {
			if(check[j]==1) res++;
		}
	}
	printf("%d",res/2);
}