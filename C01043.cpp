#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a = n;
	int tonggt = 0;
	while(n){
		int x = n % 10;
		int giaithua = 1;
		for(int i = 1 ; i <= x ; i++){
			giaithua *= i;
		}
		tonggt += giaithua;
		n /= 10;
	}
	if(a == tonggt){
		printf("1");
	}
	else{
		printf("0");
	}
}
