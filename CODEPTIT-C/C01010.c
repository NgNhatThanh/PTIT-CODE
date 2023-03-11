#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int nam=n/365;
	int thang=(n%365)/7;
	int ngay=((n%365)%7);
	printf("%d %d %d",nam, thang, ngay);
}