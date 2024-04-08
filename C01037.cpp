#include<stdio.h>
#include<math.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int c = fmin(a,b);
	int d = fmax(a,b);
	long long tong = 0;
	for ( int i = c ; i <= d ; i++){
		tong += i;
	}
	printf("%lld",tong);
}
