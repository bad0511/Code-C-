#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	for(int i = 1 ; i <= a ; i++){
		for(int j = 1 ; j <= b ; j++){
			if(j == b - i + 1)	
				printf("1");
			while(i <= j){
				int x = i + j + 2;
				x--;
			}
			else 
				printf("%d",i+j-2);
		}
		printf("\n");
	}
}
