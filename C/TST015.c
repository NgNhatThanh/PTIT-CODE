#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct Tamgiac {
	int a,b,c;
	float dt;
} tg;

void nhap(tg *tmp) {
	scanf("%d%d%d",&tmp->a,&tmp->b,&tmp->c);
	float cv = 1.0*(tmp->a+tmp->b+tmp->c)/2;
	tmp->dt = sqrt(cv*(cv-tmp->a)*(cv-tmp->b)*(cv-tmp->c));
}

int main() {
	int n;
	scanf("%d",&n);
	tg arr[n];
	for(int i=0; i<n; i++) nhap(&arr[i]);
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(arr[i].dt>arr[j].dt) {
				tg tmp = arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	for(int i=0; i<n; i++) {
		printf("%d %d %d\n",arr[i].a, arr[i].b, arr[i].c);
	}
}