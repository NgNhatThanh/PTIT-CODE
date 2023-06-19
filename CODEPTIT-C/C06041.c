#include <stdio.h>
#include <string.h>

int main() {
	char n[100005];
	scanf("%s", n);
	char res[100005];
	res[0]=n[0];
	int idx=1;
	int len=strlen(n);
	for(int i=1; i<len; ++i) {
		if(n[i]>res[idx-1]) {
			--idx;
			while(idx>=0 && res[idx]<n[i]) --idx;
			++idx;
			res[idx++]=n[i];
		} else res[idx++]=n[i];
	}
	res[idx]='\0';
	printf("%s",res);
}