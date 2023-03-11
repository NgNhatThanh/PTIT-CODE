#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct SinhVien {
	int ma;
	char ten[50];
	char d1[10], d2[10], d3[10];
} sv;

int k=1;

int check(sv a) {
	if(strcmp(a.d1, a.d2)<0 && strcmp(a.d2, a.d3)<0) return 1;
	return 0;
}

void nhap(sv *a) {
	gets(a->ten);
	scanf("%s%s%s",&a->d1, &a->d2, &a->d3);
	getchar();
}

sv arr[10000];

int main() {
	int n;
	while(scanf("%d",&n)!=-1) {
		getchar();
		if(n==1) {
			int them;
			scanf("%d",&them);
			getchar();
			for(int i=0; i<them; i++) {
				nhap(&arr[k]);
				arr[k].ma=k;
				k++;
			}
			printf("%d\n",them);
		} else if(n==2) {
			int sua;
			scanf("%d",&sua);
			getchar();
			nhap(&arr[sua]);
			printf("%d\n",sua);
		} else {
			for(int i=k-1; i>=1; i--) {
				if(check(arr[i])) printf("%d %s %s %s %s\n", arr[i].ma, arr[i].ten, arr[i].d1, arr[i].d2, arr[i].d3);
			}
		}
	}
}

