#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		float x1,y1,x2,y2,x3,y3;
		scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
		float c1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		float c2 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		float c3 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		if(c1+c2>c3 && c2+c3>c1 && c1+c3>c2) {
			printf("%.3f\n", c1+c2+c3);
		} else printf("INVALID\n");
	}
}

