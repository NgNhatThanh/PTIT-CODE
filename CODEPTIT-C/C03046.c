#include <stdio.h>
#include <math.h>

int check4(int n) {
	int res=0;
	while(n) {
		if(n%10==4) return 0;
		res+=n%10;
		n/=10;
	}
	return res%10==0;
}

int tn(int n) {
	int tn=0;
	int tmp=n;
	while(tmp) {
		tn=tn*10+tmp%10;
		tmp/=10;
	}
	return tn==n;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		int n;
		scanf("%d",&n);
		int dau=pow(10,n-1);
		int cuoi=pow(10,n)-1;
		for(int i=dau; i<=cuoi; i++) {
			if(check4(i) && tn(i)) {
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}