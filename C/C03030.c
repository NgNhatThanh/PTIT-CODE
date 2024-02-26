#include <stdio.h>
#include <math.h>

int check(int n) {
	int t=n%10;
	n/=10;
	while(n) {
		if(t<n%10) return 0;
		t=n%10;
		n/=10;
	}
	return 1;
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
			if(check(i)) printf("%d ",i);
		}
		printf("\n");
	}

}