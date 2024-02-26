#include <stdio.h>
#include <math.h>
#include <string.h>

int check(int n) {
	char tmp[10];
	sprintf(tmp,"%d",n);
	int l=0, r=strlen(tmp)-1;
	while(l<=r) {
		if(tmp[l]!=tmp[r]) return 0;
		if(tmp[l]=='9') return 0;
		l++;
		r--;
	}
	return 1;
}

int main() {
	int n;
	scanf("%d",&n);
	int cnt=0;
	for(int i=2; i<n; i++) {
		if(check(i)) {
			printf("%d ",i);
			cnt++;
		}
	}
	printf("\n%d",cnt);
}
