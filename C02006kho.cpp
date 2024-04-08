#include<stdio.h>

int main(){
	int m,n;
	scanf("%d %d", &m , &n);
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j < i ; j++){
			printf("~");
		}
		if(i == 1 || i == m){
			for(int j = 1 ; j <= n ; j++){
				printf("*");
			}
		}
		else{
			printf("*");
			for(int k = 1 ; k <= n - 2 ; k++){
				printf(".");
			}
			printf("*");
		}
		printf("\n");
	}
}

