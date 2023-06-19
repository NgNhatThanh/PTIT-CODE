#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct SinhVien {
	int ma;
	char ten[50];
	double d1, d2, d3;
} sv;

int k=1;

int check(sv a) {
	if(a.d1<=a.d2 && a.d2<=a.d3) return 1;
	return 0;
}

void nhap(sv *a) {
	gets(a->ten);
	scanf("%lf%lf%lf\n",&a->d1, &a->d2, &a->d3);
}

sv arr[10000];

int main() {
	int n;
	while(scanf("%d\n",&n)!=-1) {
		if(n==1) {
			int them;
			scanf("%d\n",&them);
			for(int i=0; i<them; i++) {
				nhap(&arr[k]);
				arr[k].ma=k;
				k++;
			}
			printf("%d\n",them);
		} else if(n==2) {
			int sua;
			scanf("%d\n",&sua);
			nhap(&arr[sua]);
			printf("%d\n",sua);
		} else {
			for(int i=k-1; i>=1; i--) {
				if(check(arr[i])) printf("%d %s %.1lf %.1lf %.1lf\n", arr[i].ma, arr[i].ten, arr[i].d1, arr[i].d2, arr[i].d3);
			}
		}
	}
}