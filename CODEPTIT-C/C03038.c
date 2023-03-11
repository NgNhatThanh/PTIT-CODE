#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n,p;
		scanf("%d%d",&n,&p);
		int res=0;
		for(int i=2; i<=n; i++) {
			int tmp=i;
			while(tmp%p==0) {
				tmp/=p;
				res++;
			}
		}
		printf("%d\n",res);
	}
}
