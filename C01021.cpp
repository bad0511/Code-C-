#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int tongchuso = 0;
	while(n){
		tongchuso += n % 10;
		n /= 10;
	}
	printf("%d",tongchuso);
}
