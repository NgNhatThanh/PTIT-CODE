#include <stdio.h>
#include <math.h>

int ucln(int m, int n){
	int sl=fmax(m,n);
	int sb=fmin(m,n);
	if(sl%sb==0) return sb;
	return ucln(sb, sl%sb);
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		int m,n;
		scanf("%d%d",&m,&n);
		int uoc=ucln(m,n);
		long long boi=1ll*m*n/uoc;
		printf("%lld %d\n",boi, uoc);
	}
}


