#include<stdio.h>
#include<math.h>

int tongchuso(int n){
	int tong1 = 0;
	int a = n;
	while(a){
		tong1 += a % 10;
		a /= 10;
	}
	return tong1;
}

int tongngto(int n){
	int tong2 = 0;
	int b = n;
	if(b < 2)
		return 0;
	for(int i = 2 ; i <= b ; i++){
		if(b % i == 0){
			while( b % i == 0){
				tong2 += tongchuso(i);
				b /= i;
			}
		}
	}
	if (b != 1){
		tong2 += b;
	}
	return tong2;
}

void check(){
	int n;
	scanf("%d",&n);
	if (tongchuso(n) == tongngto(n)) 
		printf("YES");
	else
		printf("NO");
}

int main(){
	check();
}
