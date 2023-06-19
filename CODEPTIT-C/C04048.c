#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int m, k;
	scanf("%d%d",&m,&k);
	int arr[m];
	int check[1005]={};
	for(int i=0;i<m;++i){
		scanf("%d",&arr[i]);
		for(int j=fmax(1, arr[i]-k);j<=fmin(n, arr[i]+k);++j) check[j]=1;
	}
	int res=0;
	for(int i=1;i<=n;++i){
		if(!check[i]){
			int cnt=0;
			for(int j=i;j<=n;++j){
				if(check[j]) break;
				++cnt;
			}
			res+=(cnt/(2*k+1)+(cnt%(2*k+1)!=0));
			i+=cnt-1;
		}
	}
	printf("%d",res);
}