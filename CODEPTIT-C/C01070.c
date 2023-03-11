#include <stdio.h>
#include <math.h>
#include <string.h>

int check(int a, int b,int c,int d, int e, int f) {
	int maxdai = fmax(a, fmax(c,e));
	int maxrong = fmax(b, fmax(d,f));
	if(maxdai==a+c && maxdai==b+f && b==d) return 1;
	if(maxdai==a+e && maxdai==d+b && b==f) return 1;
	if(maxdai==e+c && maxdai==b+d && f==d) return 1;
	if(maxrong==b+d && maxrong==e+a && a==c) return 1;
	if(maxrong==b+f && maxrong==a+c && a==e) return 1;
	if(maxrong==f+d && maxrong==a+e && e==c) return 1;
	if(a==c && a==e && b==d && b==f && b==a/3) return 1;
	if(a==c && a==e && b==d && b==f && a==b/3) return 1;
	return 0;
}

int main() {
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(check(a,b,c,d,e,f) || check(b,a,c,d,e,f) || check(a,b,d,c,e,f) || check(a,b,c,d,f,e) || check(b,a,d,c,f,e) || check(b,a,c,d,f,e) || check(b,a,d,c,e,f) || check(a,b,d,c,f,e)) {
		printf("YES");
	} else printf("NO");
}

