#include <stdio.h>

int gt(int n){
	if(n<=1) return 1;
	return n*gt(n-1);
}

int res(int i, int j){
	return gt(i)/(gt(j)*gt(i-j));
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++) printf("%d ",res(i,j));
		printf("\n");
	}
}