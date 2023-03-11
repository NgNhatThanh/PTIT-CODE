#include <stdio.h>
#include <math.h>
#include <string.h>

int k=1;

typedef struct MatHang {
	int ma;
	char ten[50], nhom[50];
	float mua, ban, loi;
} mh;

void nhap(mh *a) {
	a->ma=k;
	k++;
	gets(a->ten);
	gets(a->nhom);
	scanf("%f%f",&a->mua, &a->ban);
	getchar();
	a->loi = a->ban - a->mua;
}

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	mh arr[n];
	for(int i=0; i<n; i++) nhap(&arr[i]);
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(arr[i].loi<arr[j].loi) {
				mh tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	for(int i=0; i<n; i++) printf("%d %s %s %.2f\n", arr[i].ma, arr[i].ten, arr[i].nhom, arr[i].loi);
}

