#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int tich = 1;
	while(n){
		tich *= n % 10;
		n /= 10;
	}
	printf("%d",tich);
}
