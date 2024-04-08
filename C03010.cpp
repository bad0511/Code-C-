#include<stdio.h>
#include<math.h>

int sostrong(int n){
	int tonggt = 0;
	int bandau = n;
	while(n){
		int x = n % 10;
		int gt = 1;
		for(int i = 1 ; i <= x ; i++){
			gt *= i;
		}
		tonggt += gt;
		n /= 10;
	}
	return tonggt == bandau;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1; i < t ; i++){
		if (sostrong(i) == 1)
			printf("%d ",i);
	}
}
