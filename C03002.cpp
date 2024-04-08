#include<stdio.h>
#include<math.h>

int kiemtrasonguyento(int n){
	if ( n < 2 )
		return 0;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if ( n % i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int x;
	scanf("%d",&x);
	for(int j = 1 ; j < x ; j++){
		if(kiemtrasonguyento(j)){
			printf("%d\n",j);
		}
	}
}
