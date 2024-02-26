#include <stdio.h>

int main(){
	int a,b,k;
	scanf("%d%d",&a,&b);
	int m[a], n[b];
	for(int i=0;i<a;i++) scanf("%d",&m[i]);
	for(int i=0;i<b;i++) scanf("%d",&n[i]);
	scanf("%d",&k);
	for(int i=0;i<k;i++) printf("%d ",m[i]);
	for(int i=0;i<b;i++) printf("%d ",n[i]);
	for(int i=k;i<a;i++) printf("%d ",m[i]);
}