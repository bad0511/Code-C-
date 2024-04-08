#include<stdio.h>

int main(){
	int x = 3;
	int n;
	scanf("%d",&n);
	printf("1\n");
	for(int i = 2 ; i <= n ; i++){
		for(int j = 1 ; j <= x ; j++){
			if(j % 2 == 1)
				printf("%d",j);
		}
		for(int j = x - 1; j>=1 ; j--){
			if(j % 2 == 1)
				printf("%d",j);
		}
		x += 2;
		printf("\n");
	}
}
