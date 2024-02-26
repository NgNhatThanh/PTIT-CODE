#include <stdio.h>
#include <math.h>

int ucln(int a,int b) { //thuat toan Euclid tim ucln
	int sl=fmax(a,b);
	int sb=fmin(a,b);
	if(sl%sb==0) return sb;
	return ucln(sb,sl%sb);
}

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int uoc=ucln(a,b);
	long long boi=1ll*a*b/uoc;
	printf("%d\n%lld",uoc,boi);z
}
