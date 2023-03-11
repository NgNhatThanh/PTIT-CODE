#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d",&n);
	int res[100001]= {};
	int tmp=--n;
	while(n--) {
		int a,b;
		scanf("%d%d",&a,&b);
		res[a]++;
		res[b]++;
	}
	for(int i=1; i<=tmp+1; i++) {
		if(res[i]==tmp) {
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}