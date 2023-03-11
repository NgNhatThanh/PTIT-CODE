#include <stdio.h>
#include <math.h>

int ucln(int a, int b) {
	int sl=fmax(a,b);
	int sb=fmin(a,b);
	if(sl%sb==0) return sb;
	return ucln(sb, sl%sb);
}

int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(ucln(a,b)==ucln(c,d)) printf("YES\n");
		else printf("NO\n");
	}
}


