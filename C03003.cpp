#include<stdio.h>
#include<math.h>

int songuyento(int n){
	if ( n < 2 )
		return 0;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if ( n % i == 0)
			return 0;
	}
	return n > 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int i = 0 , dem = 1;
	while (dem <= n){
		if (songuyento(i)){
			printf("%d\n",i);
			dem++;
		}
		i++;
	}
}
