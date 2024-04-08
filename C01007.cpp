#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	if(b != 0){
		int tong = a + b;
		int hieu = a - b;
		long long tich = 1ll * a * b;
		int chiaphannguyen = a / b;
		int chiaphandu = a % b;
		float chiakqthuc = (float)a/b;
		printf("%d\n%d\n%lld\n%d\n%d\n%.2f\n",tong, hieu, tich, chiaphannguyen, chiaphandu, chiakqthuc);
	}
	else{
		return 0;
	}
	
}
