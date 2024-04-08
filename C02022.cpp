#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	printf("1\n");
	int t = 1 , p = 2;
	for(int i = 2 ; i <= n ; i++){
		t += i;
		if(i % 2 == 0){
			for(int j = t ; j >= p ; j--){
				printf("%d ",j);
			}
		}
		else{
			for(int j = p ; j <= t ; j++){
				printf("%d ",j);
			}
		}
		p = t + 1;
		printf("\n");
	}
}
