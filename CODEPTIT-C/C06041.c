#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
	char n[100005];
	gets(n);
	int check[27]= {};
	int max=0;
	int cs=0;
	int dai = strlen(n);
	for(int i=0; i<dai; i++) {
		check[n[i]-96]++;
		if(n[i]-96>=max) {
			max=n[i]-96;
			cs=i;
		}
	}
	while(check[max]) {
		check[max]--;
		printf("%c",max+96);
	}
	for(int i=26; i>=1; i--) {
		if(check[i]) {
			for(int j=cs; j<dai; j++) {
				if(check[i]==0) break;
				if(n[j]-96==i) {
					check[i]--;
					cs=j;
					printf("%c",n[j]);
				}
			}
		}
	}
}