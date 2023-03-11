#include <stdio.h>
#include <math.h>

int main() {
	long long n;
	scanf("%lld",&n);
	int nt[8]={};
	while(n){
		switch (n%10){
			case 2:
				nt[2]++;
				break;
			case 3:
				nt[3]++;
				break;
			case 5:
				nt[5]++;
				break;
			case 7: nt[7]++;	
		}
		n/=10;
	}
	for(int i=2;i<=7;i++) {
		if(nt[i]) printf("%d %d\n",i,nt[i]);
	}
}