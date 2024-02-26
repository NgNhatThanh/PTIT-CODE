#include <stdio.h>
#include <math.h>
#include <string.h>

int check(int n) {
	while(n>=10) {
		int tmp=n%10;
		n/=10;
		if(n%10>tmp) return 0;
	}
	return 1;
}

int main() {
	int ck[1000]= {};
	int k=0;
	int n;
	while(scanf("%d",&n)!=-1) {
		if(check(n)) {
			ck[k++]=n;
		}
	}
	int in[1000]= {};
	int lan[1000]= {};
	int m=0;
	for(int i=0; i<k-1; i++) {
		if(ck[i]!=-1) {
			int cnt=1;
			for(int j=i+1; j<k; j++) {
				if(ck[i]==ck[j]) {
					cnt++;
					ck[j]=-1;
				}
			}
			in[m]=ck[i];
			lan[m++]=cnt;
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=i; j<m; j++) {
			if(lan[i]<=lan[j]) {
				int tmp=lan[i], tmp2=in[i];
				lan[i]=lan[j];
				in[i]=in[j];
				lan[j]=tmp;
				in[j]=tmp2;
			}
		}
	}
	for(int i=0; i<m; i++) printf("%d %d\n",in[i],lan[i]);
}

