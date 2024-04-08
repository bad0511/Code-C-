#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int tongchuso = 0;
	for(int i = 1 ; i <= n ; i++){
		int x;
		scanf("%d",&x);
		while(x){
			tongchuso += x % 10;
			x /= 10;
		}
		printf("%d\n",tongchuso);
		tongchuso = 0;
	}
}
