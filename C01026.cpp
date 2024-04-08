#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	for (int i = 1 ; i <= n ; i++){
		int x;
		scanf("%d",&x);
		int check = 0;
		for(int j = 1 ; j <= sqrt(x); j++){
			if( x % j == 0){
				check++;
			}
		}
		if(check > 1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
		check = 0;
	}
}
