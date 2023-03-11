#include <stdio.h>
#include <math.h>
#include <string.h>

int ucln(int a, int b){
	int sl=fmax(a,b);
	int sb=fmin(a,b);
	if(sl%sb==0) return sb;
	return ucln(sb, sl%sb);
}

int main() {
	int a;
	scanf("%d",&a);
	int cas=1;
	while(a--){
		printf("Case #%d:\n",cas);
		cas++;
		int t1, m1, t2, m2;
		scanf("%d%d%d%d",&t1,&m1,&t2,&m2);
		int chung1 = ucln(t1,m1);
		int chung2 = ucln(t2,m2);
		t1/=chung1; m1/=chung1;
		t2/=chung2; m2/=chung2;
		int chung = (m1*m2)/ucln(m1,m2);
		t1*=chung/m1; t2*=chung/m2; m1*=chung/m1; m2*=chung/m2;
		printf("%d/%d %d/%d\n",t1,m1,t2,m2);
		printf("%d/%d\n",t1+t2,m1);
		t1*=m2;
		m1*=t2;
		int res=ucln(t1,m1);
		t1/=res; m1/=res;
		printf("%d/%d\n",t1,m1);
	}
}

	