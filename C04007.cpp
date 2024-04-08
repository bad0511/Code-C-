#include<stdio.h>
#include<math.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100],b[100];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i < m ; i++){
		scanf("%d",&b[i]);
	}
	int p;
	scanf("%d",&p);
	for(int i = n+m-1 ; i >= p ; i--){
		a[i] = a[i-m];
	}
	int j = 0;
	for(int i = p ; i <= p + m - 1 ; i++){
		a[i] = b[i-p];
	}
	for(int i = 0 ; i < n+m ; i++){
		printf("%d ",a[i]);
	}
}
