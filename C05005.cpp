#include<stdio.h>

int main(){
	int t,n,m;
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++){
		int a[100][100];
		scanf("%d%d",&n,&m);
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",k);
		for(int i = 1 ; i < n ; i++){
			for(int j = 1 ; j < m ; j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}
