#include <stdio.h>
#include <string.h>

typedef struct SinhVien {
	char ten[55];
	int ma;
	double a, b, c, tongdiem;
} sv;

int main() {
	sv arr[100];
	int idx=1;
	int n;
	int k;
	while(scanf("%d\n",&n)!=-1) {
		if(n==1) {
			scanf("%d\n",&k);
			for(int i=0; i<k; ++i) {
				arr[idx].ma=idx;
				gets(arr[idx].ten);
				scanf("%lf%lf%lf\n", &arr[idx].a, &arr[idx].b, &arr[idx].c);
				arr[idx].tongdiem=arr[idx].a+arr[idx].b+arr[idx].c;
				++idx;
			}
			printf("%d\n",k);
		} else if(n==2) {
			scanf("%d\n",&k);
			gets(arr[k].ten);
			scanf("%lf%lf%lf", &arr[k].a, &arr[k].b, &arr[k].c);
			arr[k].tongdiem=arr[k].a+arr[k].b+arr[k].c;
			printf("%d\n",k);
		} else {
			for(int i=1; i<idx; ++i) {
				for(int j=i+1; j<idx; ++j) {
					if(arr[i].tongdiem>arr[j].tongdiem) {
						sv tmp=arr[i];
						arr[i]=arr[j];
						arr[j]=tmp;
					}
				}
			}
			for(int i=1; i<idx; ++i) printf("%d %s %.1lf %.1lf %.1lf\n", arr[i].ma, arr[i].ten, arr[i].a, arr[i].b, arr[i].c);
		}
	}
}