#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int res=0;
	int tmp;
	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		res+=tmp;
	}
	printf("%.3f",1.0*res/n);

}
