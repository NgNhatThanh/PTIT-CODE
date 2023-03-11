#include <stdio.h>
#include <math.h>

int nt[1000000];

void sang() { //thuat toan sang so nguyen to Eratosthenes
	nt[1]=1;
	for(int i=2; i<=sqrt(1000000); i++) {
		for(int j=i*i; j<=1000000; j+=i) nt[j]=1;
	}
}

int main() {
	sang();
	int n;
	scanf("%d",&n);
	for(int i=2; i<=n; i++) {
		if(nt[i]==0) printf("%d\n",i);
	}

}
