#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[1000];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	int p;
	scanf("%d",&p);
	--p;
	for(int i = 0 ; i < p+1 ; i++){
		a[i + n] = a[i];
	}
	for(int i = p+1 ; i <= n + p ; i++){
		printf("%d ",a[i]);
	}
}
