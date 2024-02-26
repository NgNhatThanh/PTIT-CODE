#include <stdio.h>
#include <math.h>

// 6 28 496 8128
// day la 4 so hoan hao duy nhat thoa man de bai, neu muon nhanh thi chi can kiem tra 4 so nay

int check(int n){
	int res=1;
	int can=sqrt(n);
	for(int i=2;i<=can;i++){
		if(n%i==0){
			res+=i;
			if(n/i!=i) res+=n/i;
		}
	}
	return res==n;
}

int main() {
	int n;
	scanf("%d",&n);
	for(int i=6;i<=n;i++){
		if(check(i)) printf("%d ",i);
	}
}
