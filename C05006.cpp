#include<stdio.h>

int m,n;
int a,b;
int s[100][100];

int main(){
	scanf("%d%d",&m,&n);
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ;j++){
			scanf("%d",&s[i][j]);
		}
	}
	scanf("%d%d",&a,&b);
	--a;--b;
	for(int i = 0 ; i < n ; i++){ // cot
		int tmp = s[a][i];
		s[a][i] = s[b][i];
		s[b][i] = tmp;
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
}
