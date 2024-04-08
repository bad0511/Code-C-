#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++){
		int ktao = i;
		int kc = n - 1;
		for(int j = 1 ; j <= i ; j++){
			printf("%d ",ktao);
			ktao += kc;
			kc--;
		}
		printf("\n");
	}
}
