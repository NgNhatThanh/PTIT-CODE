#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int hang=0, cot=0;

int check(int n, int arr[][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1) return 0;
		}
	}
	return 1;
}

void tim(int n, int arr[][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1){
				hang=i;
				cot=j;
			}
		}
	}
}

void process(int n, int arr[][n]){
	for(int i=0;i<=hang;i++){
		for(int j=0;j<=cot;j++){
			if(arr[i][j]==1) arr[i][j]=0;
			else arr[i][j]=1;
		}
	}
}

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	char tmp[100];
	int arr[n][n];
	for(int i=0;i<n;i++){
		gets(tmp);
		for(int j=0;j<n;j++){
			arr[i][j]=tmp[j]-48;
		}
	}
	int res=0;
	while(check(n, arr)!=1){
		tim(n, arr);
		process(n, arr);
		res++;
	}
	printf("%d",res);
}