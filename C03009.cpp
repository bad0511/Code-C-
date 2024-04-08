#include<math.h>
#include<stdio.h>

int hh(int n){
	if ( n == 1 )
		return 0;
	int tong = 1;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if ( n % i == 0 && n != 1){
			tong += i;
			if(i != (n/i))
				tong += n/i;
		}
	}
	return tong == n;
}

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	if (a < b){
		for(int i = a ; i <= b ; i++){
			if (hh(i))
				printf("%d ",i);
		}
	}
	else if( a > b){
		int x = a;
		a = b;
		b = x;
		for(int i = a ; i <= x ; i++){
			if(hh(i))
				printf("%d ",i);
		}
	}
}
