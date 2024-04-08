#include<stdio.h>

int tongchuso1(int a){
	int x = a;
	int tong1 = 0;
	while(x){
		tong1 += x % 10;
		x /= 10;
	}
	return tong1;
}

int tongchuso2(int b){
	int y = b;
	int tong2 = 0;
	while(y){
		tong2 += y % 10;
		y /= 10;
	}
	return tong2;
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if(tongchuso1(a) <= tongchuso2(b))
		printf("%d %d",a,b);
	else
		printf("%d %d",b,a);
}
