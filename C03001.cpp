#include<stdio.h>

int tongcs(int n){
	int tong = 0;
	while (n){
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int main(){
	int x;
	scanf("%d",&x);
	for(int i = 1 ; i <= x ; i++){
		int n;
		scanf("%d",&n);
		if(tongcs(n) % 10 == 0)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
}
