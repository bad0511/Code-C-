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
	for(int i = 0 ; i < m ; i++){ // hang
		int tmp = s[i][a];
		s[i][a]= s[i][b];
		s[i][b] = tmp;
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
}
