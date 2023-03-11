#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	int test=1;
	while(a--) {
		int m,n;
		scanf("%d%d",&m,&n);
		int arr[m][n];
		int sum=0;
		int tmp=0;
		int cs=0;
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				scanf("%d",&arr[i][j]);
				sum+=arr[i][j];
			}
			if(sum>tmp) {
				tmp=sum;
				cs=i;
			}
			sum=0;
		}
		printf("Test %d:\n",test);
		test++;
		int sum2=0;
		int tmp2=0;
		int cot=0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) sum2+=arr[j][i];
			sum2-=arr[cs][i];
			if(sum2>tmp2) {
				tmp2=sum2;
				cot=i;
			}
			sum2=0;
		}
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				if(i!=cs && j!=cot) printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	}
}
