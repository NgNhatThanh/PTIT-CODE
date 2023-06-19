#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int c[6];
	int tong=0;
	for(int i=0;i<6;++i){
		scanf("%d",&c[i]);
		tong+=c[i];
	}
	int dt=c[0]*c[1]+c[2]*c[3]+c[4]*c[5];
	if(sqrt(dt)!=(int)sqrt(dt)) printf("NO");
	else if(c[0]==c[2] && c[0]==c[4] && c[1]+c[3]+c[5]==c[0]){// truong hop 3 hinh ghep chong len nhau
		printf("YES");
	}
	else{// truong hop 2 hinh ngan va 1 hinh dai
		int canh=sqrt(dt);
		for(int i=0;i<6;++i){
			int tmp=tong+c[i];
			if(tmp%4==0 && (tmp/4)==canh){
				printf("YES");
				return 0;
			}
		}
		printf("NO");
	}
}