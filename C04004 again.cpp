#include<stdio.h>
#include<math.h>
#define ll long long

long long fibo(int n){
	if( n == 1 || n == 2) // do f1 = 1 ; f2 = 1 theo de bai ra
		return 1;
	long long fn1 = 1, fn2 = 1 , fn;
	for(int i = 3 ; i <= n ; i++){
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d\n",fibo(n));
	}
}
