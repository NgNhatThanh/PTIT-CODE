#include <stdio.h>
#include <math.h>

int nt[100001];

void sang() {
	nt[1]=1;
	for(int i=2; i<=sqrt(100000); i++) {
		for(int j=i*i; j<=100000; j+=i) nt[j]=1;
	}
}

int main() {
	sang();
	int a;
	scanf("%d",&a);
	int test=1;
	while(a--) {
		int check[100001]= {};
		printf("Test %d:\n",test);
		test++;
		int max=0;
		int n;
		scanf("%d",&n);
		int tmp;
		for(int i=0; i<n; i++) {
			scanf("%d",&tmp);
			if(nt[tmp]==0) {
				check[tmp]++;
				if(tmp>max) max=tmp;
			}
		}
		for(int i=2; i<=max; i++) {
			if(check[i]) printf("%d xuat hien %d lan\n",i,check[i]);
		}
	}
}