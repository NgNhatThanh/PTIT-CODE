#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	if(n==1) printf("1");
	else {
		for(int i=1; i<=2*n-1; i++) printf("%d",n);
		printf("\n");
		int l=2, r=2*n-2;
		int check=0;
		while(l!=1 && r!=2*n-1) {
			int tmp=n;
			if(l==r) check=2;
			for(int i=1; i<=2*n-1; i++) {
				if(i<=l) {
					printf("%d",tmp);
					tmp--;
				}
				if(i>l && i<r) {
					printf("%d",tmp+1);
				}
				if(i>=r) {
					tmp++;
					if(check==2) {
						i++;
						check=1;
						tmp++;
					}
					printf("%d",tmp);

				}
			}
			printf("\n");
			if(check) {
				l--;
				r++;
			} else {
				l++;
				r--;
			}
		}
		for(int i=1; i<=2*n-1; i++) printf("%d",n);
	}
}
