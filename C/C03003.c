#include <stdio.h>
#include <math.h>

int nt[1300000]; //so nguyen to thu 100000 nho hon 1300000 (cai nay google la duoc nhe :> )

void sang() {
	nt[1]=1;
	int sqr=sqrt(1300000);
	for(int i=2; i<=sqr; i++) {
		for(int j=i*i; j<=1300000; j+=i) nt[j]=1;
	}
}

int main() {
	sang();
	int n;
	scanf("%d",&n);
	for(int i=2; i<=1300000; i++) {
		if(n==0) break;
		if(nt[i]==0) {
			printf("%d\n",i);
			n--;
		}
	}

}