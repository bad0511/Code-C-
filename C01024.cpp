#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++){
		int x;
		scanf("%d",&x);
		int sodau;
		int check = x % 10;
		while(x){
			sodau = x % 10;
			x /= 10;
		}
		if(check == sodau){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

