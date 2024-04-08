#include<stdio.h>


int main(){
	int n;
	scanf("%d",&n);
	int x=1;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= x ; j++){
			printf("%d",j);
		}
		x += 2;
		printf("\n");
	}
}
