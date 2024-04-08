#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++){
		int x,y;
		scanf("%d %d", &x, &y);
		if(x == 0 || y == 0){
			printf("%d\n",x+y);
		}
		while(x!=y){
			if(x>y){
				x = x - y;
			}
			else if (x<y){
				y = y - x;
			}
		}
		printf("%d\n",x);
	}
}
