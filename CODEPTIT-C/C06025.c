#include <stdio.h>
#include <math.h>
#include <string.h>
// Bai nay sub tren CodePtit thoi chu bai khac co the sai, minh lam khong chi tiet va chuan
void rev(char n[]) {
	for(int i=0; i<strlen(n)/2; i++) {
		char tmp=n[i];
		n[i]=n[strlen(n)-i-1];
		n[strlen(n)-i-1]=tmp;
	}
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char a[1010], b[1010];
		int k=0;
		gets(a);
		gets(b);
		if(strcmp(a,b)==0) printf("0\n");
		else {
			char res[1010];
			if(strlen(a)<strlen(b) || (strlen(a)==strlen(b) && strcmp(a,b)<0)) {
				char tp[1010];
				strcpy(tp,a);
				strcpy(a,b);
				strcpy(b,tp);
			}
			rev(a);
			rev(b);
			int muon=0;
			for(int i=0; i<strlen(a); i++) {
				int tmp=a[i]-48;
				tmp-=muon;
				muon=0;
				if(i<strlen(b)) {
					int tmp2=b[i]-48;
					if(tmp2>tmp) {
						muon++;
						tmp+=(10-tmp2);
					} else tmp-=tmp2;
				} else {
					if(tmp<muon) {
						tmp+=(10-muon);
						muon=1;
					} else {
						tmp-=muon;
						muon=0;
					}
				}
				res[k++]=tmp+48;
			}
			for(int i=strlen(res)-1; i>=0; i--) {
				if(res[i]>'0' && res[i]<='9') break;
				else res[i]='\0';
			}
			rev(res);
			printf("%s\n",res);
		}
	}
}

