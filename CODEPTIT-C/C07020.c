#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct Pokemon {
	char ten[50];
	int m,n;
} pk;

void nhap(pk *a) {
	gets(a->ten);
	scanf("%d%d",&a->n, &a->m);
	getchar();
}

char luu[50];

int main() {
	int n;
	int res=0;
	int max=0;
	scanf("%d",&n);
	getchar();
	pk arr[n];
	for(int i=0; i<n; i++) {
		int len=0;
		nhap(&arr[i]);
		while(arr[i].m>=arr[i].n) {
			arr[i].m-=arr[i].n;
			arr[i].m+=2;
			res++;
			len++;
		}
		if(len>max) {
			strcpy(luu, arr[i].ten);
			max=len;
		}
	}
	printf("%d\n%s",res, luu);
}

