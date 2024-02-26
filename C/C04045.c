#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char n[1000];
		gets(n);
		int cnt=0;
		int chan=0;
		int le=0;
		int dai=strlen(n);
		for(int i=0; i<dai; i++) {
			if(i==dai-1 || (n[i]!=' ' && n[i+1]==' ')) {
				cnt++;
				if((n[i]-48)%2) le++;
				else chan++;
			}
		}
		if((cnt%2 && le>chan) || (cnt%2==0 && chan>le)) printf("YES\n");
		else printf("NO\n");
	}
}
