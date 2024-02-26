#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a--) {
		double x1,y1,x2,y2,x3,y3;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		double c1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		double c2 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		double c3 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		if(c1+c2>c3 && c2+c3>c1 && c1+c3>c2) {
			double cv = (c1+c2+c3)/2;
			double s = sqrt((cv-c1)*(cv-c2)*(cv-c3)*cv);
			printf("%.2lf\n",s);
		} else printf("INVALID\n");
	}
}

