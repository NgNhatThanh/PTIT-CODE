#include <stdio.h>
#include <math.h>
#include <string.h>

int nt[1000000];

void sang() {
	nt[1]=1;
	for(int i=2; i<=sqrt(1000000); i++) {
		for(int j=i*i; j<=1000000; j+=i) nt[j]=1;
	}
}

int tn(int a) {
	char tmp[100];
	sprintf(tmp,"%d",a);
	int l=0, r=strlen(tmp)-1;
	while(l<r) {
		if(tmp[l]!=tmp[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int main() {
	sang();
	int a;
	scanf("%d",&a);
	while(a--) {
		int m,n;
		int check=10;
		scanf("%d%d",&m,&n);
		for(int i=m; i<=n; i++) {
			if(check==0) {
				printf("\n");
				check=10;
			}
			if(nt[i]==0 && tn(i)) {
				printf("%d ",i);
				check--;
			}
		}
		printf("\n");
		printf("\n");
	}
}
