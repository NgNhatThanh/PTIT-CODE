#include <stdio.h>
#include <math.h>

int ucln(int a, int b) {
	int sl= fmax(a,b);
	int sb=fmin(a,b);
	if(sl%sb==0) return sb;
	return ucln(sb,sl%sb);
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int m,n;
		scanf("%d%d",&m,&n);
		printf("%d\n",ucln(m,n));
	}
}