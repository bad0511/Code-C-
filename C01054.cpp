#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
	int t;
	scanf("%d",&t);
	ll tong = 0;
	while(t--){
		int x;
		scanf("%d",&x);
		for(int j = 2 ; j * j <= x ; j++){
			while(x % j == 0){
				tong += j;
				x /= j;
			}
		}
		if(x != 1)
			tong += x;
	}
	printf("%lld",tong);
	return 0;
}
