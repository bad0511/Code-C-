#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++){
		int c = 2; 
		int l = 1;
		if ( i % 2 == 0){
			for(int j = 1 ; j <= i ; j++){
				printf("%d",c);
				c+=2;
			}
			printf("\n");
		}
		else{
			for(int j = 1 ; j <= i ; j++){
				printf("%d",l);
				l += 2;
			}
			printf("\n");
		}
	}
}
