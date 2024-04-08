#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i = 1 ; i <= n ; i++){
		int x;
		scanf("%d",&x);
		int dem = 0;
		for(int j = 1 ; j <= sqrt(x) ; j++){
			if ( (x % j) == 0){
				if ( j % 2 == 0){
					dem++;
				}
				if ((x / j) % 2 == 0){
					dem++;
				}
				if(j == (x/j)){
					dem-=1;
				}
				if(dem<0){
					dem = 0;
				}
			}
		}
		printf("%d\n",dem);
	}
	
}
