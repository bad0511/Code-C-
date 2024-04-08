#include<stdio.h>
#include<math.h>


long long sau(long long n){
	int dem = 0; //dem so chu so cua n
	long long somoi = 0;
	while(n){
		int x = n % 10;
		n /= 10;
		dem++;
		if (x == 0)
			x = 0;
		if (x == 1)
			x = 1;
		if (x == 8)
			x = 0;
		if (x == 9)
			x = 0;
		somoi += x * pow(10,dem-1);
	}
	return somoi;
}

int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",sau(n));
}
