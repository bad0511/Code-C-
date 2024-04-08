#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1 ; i<= n ; i++){
		int x;
		scanf("%d",&x);
		printf("%lld\n",1ll*x*x);
	}
}
