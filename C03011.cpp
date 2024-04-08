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
	int a,b;
	scanf("%d %d",&a, &b);
	if ( a < b){
		for(int i = a; i <= b ; i++){
			if (sostrong(i) == 1)
				printf("%d ",i);
		}
	}
	else {
		int x = a;
		a = b;
		b = x;
		for(int i = a ; i <= b ; i++){
			if(sostrong(i) == 1)
				printf("%d ",i);
		}
	}
}
