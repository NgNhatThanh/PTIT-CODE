#include <stdio.h>
#include <math.h>
#include <string.h>

int check(int n) {
	int cnt=0;
	int res=0;
	char tmp[100];
	sprintf(tmp,"%d",n);
	int l=0, r=strlen(tmp)-1;
	while(l<=r) {
		if(tmp[l]!=tmp[r]) return 0;
		if(tmp[l]=='6') cnt++;
		res+=2*(tmp[l]-48);
		if(l==r) res-=(tmp[l]-48);
		l++;
		r--;
	}
	return cnt>0 && res%10==8;
}

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int tmp=b;
	int res=0;
	b=fmax(a,tmp);
	a=fmin(a,tmp);
	for(int i=a; i<=b; i++) {
		if(check(i)) printf("%d ",i);
	}
}
