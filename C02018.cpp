#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int x = 1 , q = n-1;
	for(int i = 1 ; i <= n; i++ ){
		for(int k = 1; k<=q ; k++){
			printf("~");
		}
		q--;
		for(int j = 1 ; j <= x ; j++){
			if(j % 2 == 1)
				printf("%d",j);
		}
		for(int j = x - 1; j >= 1 ; j--){
			if(j % 2 == 1)
				printf("%d",j);
		}
		x+=2;
		printf("\n");
	}	       
}
