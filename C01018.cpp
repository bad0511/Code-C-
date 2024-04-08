#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	for ( int i = 1 ; i <= n ; i++){
		int x;
		scanf("%d",&x);
		int check = sqrt(x);
		if(check * check == x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
