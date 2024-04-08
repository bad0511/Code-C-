#include<stdio.h>

void ptich(){
	long long n;
	scanf("%lld",&n);
	int dem1 = 0 , dem2 = 0 , dem3 = 0 , dem4 = 0;
	while(n){
		long long x = n % 10;
		n /= 10;
		if(x == 2)
			dem1++;
		if(x == 3)
			dem2++;
		if(x == 5)
			dem3++;
		if(x == 7)
			dem4++;
	}
	if (dem1 > 0)
		printf("2 %d\n", dem1);
	if (dem2 > 0)
		printf("3 %d\n", dem2);
	if (dem3 > 0)
		printf("5 %d\n", dem3);
	if (dem4 > 0)
		printf("7 %d\n", dem4);
}

int main(){
	ptich();
}
