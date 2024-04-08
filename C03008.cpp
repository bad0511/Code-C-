#include<math.h>
#include<stdio.h>

int hh(int n){
	int tong = 1;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if ( n % i == 0){
			tong += i;
			if(i != (n/i))
				tong += n/i;
		}
	}
	return tong == n;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 2 ; i < n ; i++){
		if(hh(i)){
			printf("%d ",i);
		}
	}
}
