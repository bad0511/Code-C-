#include<stdio.h>

int ktraFibo(int n){
	int fn2 = 0 , fn1 = 1, fn;
	if ( n == 0 || n == 1)
		return 0;
	for(int i = 2 ; i <= 92 ; i++){
		fn = fn1 + fn2;
		if (fn == n)
			return 1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d", ktraFibo(n));
}


