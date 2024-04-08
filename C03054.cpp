#include<stdio.h>
#include<math.h>

int chuso(long long n){
	while(n){
		int x = n % 10;
		if(x == 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 7)
			return 0;
		n /= 10;
	}
	return 1;
}

void sau(){
	long long n;
	int a = n;
	scanf("%lld",&n);
	int dem = 0; //dem so chu so cua n
	long long somoi = 0;
	while(n > 0 && chuso(n) != 0){
		long long x = n % 10;
		n /= 10;
		dem++;
		if (x == 0)
			x = 0;
		if (x == 1)
			x = 1;
		if (x == 8)
			x = 0;
		if (x == 9)
			x = 0;
		somoi += x * pow(10,dem-1);
	}
	if (chuso(n) == 1)
		if (a == 0)
			printf("INVALID\n");
		else
			printf("%lld\n",somoi);
	else
		printf("INVALID\n");
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){	
		sau();
	}
}
