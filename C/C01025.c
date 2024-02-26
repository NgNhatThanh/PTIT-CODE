#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int xmax = fmax(x4,x2);
	int xmin = fmin(x1,x3);
	int doc = xmax-xmin;
	int ymax = fmax(y2,y4);
	int ymin = fmin(y1,y3);
	int ngang = ymax-ymin;
	int res = fmax(ngang, doc);
	printf("%d",res*res);
}

