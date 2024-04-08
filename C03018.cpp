#include<stdio.h>
#include<math.h>

int ngto(int n){
	if ( n < 2 )
		return 0;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int ktraFibo(int n){
	int tong = 0;
	int x = n;
	while(x){
		tong += x % 10;
		x /= 10;
	}
	if (n == 0 || n == 1){
		return 1;
	}
	long long fn2 = 0 , fn1 = 1 , fn;
	for(int i = 2 ; i <= 92 ; i++){
		fn = fn1 + fn2;
		if (fn == tong)
			return 1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if ( a < b ){
		for(int i = a ; i <= b ; i++){
			if ( (ktraFibo(i) == 1) && (ngto(i) == 1) )
				printf("%d ",i);
		}
	}
	else{
		for(int i = b ; i <= a ;i++){
			if ( (ktraFibo(i) == 1) && (ngto(i) == 1) )
				printf("%d ",i);
		}
	}
}
