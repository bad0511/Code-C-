#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	long long a;
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long b = n;
		long long check = 0;
		long long sochuso = 0;
		while(n){
			sochuso += 1;
			n /= 10;
		}
		a = sochuso;
		for(int i = 1 ; i <= a-1 ; i++){
			int x = b % 10;
			b /= 10;
			if(x >= (b % 10)){
				check++;
			}
		}
		if(check == (a-1)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
