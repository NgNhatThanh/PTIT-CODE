#include <stdio.h>
#include <math.h>
#include <string.h>

int k=1;

typedef struct ThiSinh {
	int ma;
	char ten[50];
	char sinh[50];
	float d1, d2, d3;
	float res;
} ts;

void nhap(ts *a) {
	a->ma = k++;
	gets(a->ten);
	gets(a->sinh);
	scanf("%f%f%f",&a->d1, &a->d2, &a->d3);
	getchar();
	a->res = a->d1 + a->d2 + a->d3;

}

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	ts arr[n];
	float max=-1;
	for(int i=0; i<n; i++) {
		nhap(&arr[i]);
		if(arr[i].res>max) max=arr[i].res;
	}
	for(int i=0; i<n; i++) {
		if(arr[i].res==max) printf("%d %s %s %g\n", arr[i].ma, arr[i].ten, arr[i].sinh, arr[i].res);
	}
}

