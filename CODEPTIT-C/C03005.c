#include <stdio.h>
#include <math.h>

int ucln(int a,int b){
	int sl=fmax(a,b);
	int sb=fmin(a,b);
	if(sl%sb==0) return sb;
	return ucln(sb,sl%sb);
}

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<b;i++){
		for(int j=i+1;j<=b;j++){
			if(ucln(i,j)==1) printf("(%d,%d)\n",i,j);
		}
	}
}
