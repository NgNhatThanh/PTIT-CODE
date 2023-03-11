#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char n[1000];
	gets(n);
	int check[5]= {};
	for(int i=0; i<strlen(n); i++) {
		switch (n[i]) {
			case '(' :
			case ')':
				check[0]++;
				break;
			case '{':
			case '}':
				check[1]++;
				break;
			case '[':
			case ']':
				check[2]++;
				break;
			case '\'':
				check[3]++;
				break;
			default:
				check[4]++;
		}
	}
	for(int i=0; i<5; i++) {
		if(check[i]%2) {
			printf("0");
			return 0;
		}
	}
	printf("1");
}
