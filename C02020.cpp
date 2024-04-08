#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int x = 2 , q = n - 1; 
	for(int i = 1 ; i <= n ; i++){
		for(int k = 1 ; k <= q ; k++){
			printf("~");
		}
		q--;
		for(int j = 2 ; j <= x ; j++){
			if(j % 2 == 0)
				printf("%d",j);
		}
		for(int j = x - 1; j >= 2 ; j--){
			if(j % 2 == 0)
				printf("%d",j);
		}
		x += 2;
		printf("\n");
	}
}
