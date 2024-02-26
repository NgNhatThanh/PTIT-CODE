#include <stdio.h>
#include <math.h>
#include <string.h>

void process(){
	char n[105];
	gets(n);
	for(int i=0;i<strlen(n);i++){
		int cnt=0;
		for(int j=i;j<strlen(n);j++){
			if(n[j]!=n[i]) break;
			else cnt++;
		}
		printf("%c%d",n[i],cnt);
		i+=cnt-1;
	}
	printf("\n");
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--){
		process();
	}
}