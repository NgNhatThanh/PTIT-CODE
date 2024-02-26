#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int a;
	scanf("%d",&a);
	int res=0;
	int arr[110][110];
	int k=0;
	while(a--) {
		scanf("%d%d",&arr[k][0],&arr[k][1]);
		k++;
	}
	for(int i=0; i<k; i++) {
		for(int j=i; j<k; j++) {
			if(arr[i][0]>arr[j][0]) {
				int tmp1=arr[i][0];
				int tmp2=arr[i][1];
				arr[i][0]=arr[j][0];
				arr[i][1]=arr[j][1];
				arr[j][0]=tmp1;
				arr[j][1]=tmp2;
			}
		}
	}
	for(int i=0; i<k; i++) {
		if(arr[i][0]>res) res=arr[i][0];
		res+=arr[i][1];
	}
	printf("%d",res);
}
