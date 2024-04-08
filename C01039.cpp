#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int dem = 0;
	while(n){
		dem++;
		n /= 10;
	}
	printf("%d",dem);
}
