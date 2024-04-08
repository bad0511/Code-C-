#include<stdio.h>

void inFibo(int n){
	if (n == 1)
		printf("0");
	if ( n == 2)
		printf("0 1");
	else{
		printf("0 1 ");
		int fn2 = 0 , fn1 = 1 , fn;
		for(int i = 3 ; i <= n ;i++){
			fn = fn1 + fn2;
			fn2 = fn1;
			fn1 = fn;
			printf("%d ",fn);
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	inFibo(n);
}
