#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int check(char a[20], char b[20]) {
	char tmp1[30], tmp2[30];
	strcpy(tmp1, a);
	strcat(tmp1, b);
	strcpy(tmp2, b);
	strcat(tmp2, a);
	if(strcmp(tmp1, tmp2)>=0) return 1;
	return 0;
}

void swap(char a[], char b[]) {
	char tmp[100];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
}

void process() {
	int n;
	scanf("%d\n",&n);
	char res[10][15];
	for(int i=1; i<=n; i++) scanf("%s",res[i]);
	for(int i=1; i<n; i++) {
		for(int j=i+1; j<=n; j++) {
			if(check(res[i], res[j])) {
				swap(res[i], res[j]);
			}
		}
	}
	for(int i=1; i<=n; i++) printf("%s",res[i]);
	printf("\n");
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		process();
	}
}

