#include<stdio.h>
#include<math.h>

int tn(int n){
	int lat = 0;
	int a = n;
	while(a){
		if(a % 10 != 4){
			lat = lat * 10 + a % 10;
			a /= 10;
		}
		else
			return 0;
	}
	return lat == n;
}

int tongchuso(int n){
	int tong = 0;
	while(n){
		if(n % 10 != 4){
			tong += n % 10;
			n /= 10;
		}
		else
			return 0;
	}
	if(tong % 10 == 0)
		return 1;
	else
		return 0;
}

void inthoaman(){
	int n;
	scanf("%d",&n);
	for(int i = pow(10,n-1) ; i <= pow(10,n) - 1 ; i++){
		if(tongchuso(i) == 1 && tn(i) == 1)
			printf("%d ",i);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		inthoaman();
		printf("\n");
	}
}
