#include <stdio.h>
#include <math.h>
#include <string.h>

int check(char n) {
	switch (n) {
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
	}
}

int main() {
	int a;
	scanf("%d",&a);
	getchar();
	while(a--) {
		char n[100];
		gets(n);
		int res=check(n[strlen(n)-1]);
		for(int i=strlen(n)-2; i>=0; i--) {
			int pre=check(n[i+1]);
			int pos=check(n[i]);
			if(pos<pre) res-=pos;
			else res+=pos;
		}
		printf("%d\n",res);
	}
}

