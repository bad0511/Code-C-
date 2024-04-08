#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int x = 4;
	printf("2\n");
	for(int i = 2 ; i <= n ; i++){
		for(int j = 2 ; j <= x ; j++){
			if(j % 2 == 0)
				printf("%d",j);
		}
		for(int j = x-1 ; j >= 2 ; j--){ // dung x - 1 de tranh bi trung them 1 lan voi vong for in ben tren
			if(j % 2 == 0)
				printf("%d",j);
		}
		x += 2;
		printf("\n");
	}
}
