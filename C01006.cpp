#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if(b != 0){
		int tong = a + b;
		int hieu = a - b;
		int tich = a * b;
		float thuong = (float)a/b;
		int du = a % b;
		printf("%d %d %d %.2f %d", tong, hieu, tich, thuong, du);
	}
	else if ( b == 0 ){
		printf("0");
	}
}
