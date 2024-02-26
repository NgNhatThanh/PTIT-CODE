#include <stdio.h>

int main() {
	int h;
	scanf("%d",&h);
	int test=1;
	while(h--) {
		printf("Test %d:\n",test);
		test++;
		int a,b,k;
		scanf("%d%d%d",&a,&b,&k);
		int m[a], n[b];
		for(int i=0; i<a; i++) scanf("%d",&m[i]);
		for(int i=0; i<b; i++) scanf("%d",&n[i]);
		for(int i=0; i<k; i++) printf("%d ",m[i]);
		for(int i=0; i<b; i++) printf("%d ",n[i]);
		for(int i=k; i<a; i++) printf("%d ",m[i]);
		printf("\n");
	}
}