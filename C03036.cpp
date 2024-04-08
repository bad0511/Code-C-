#include<stdio.h>

int tn(long long n){
	long long a = n;
	long long lat = 0;
	while(a){
		lat = lat * 10 + a % 10;
		a /= 10;
	}
	if(lat == n)
		return 1;
	else
		return 0;
}

int tongchuso(long long n){
	long long b = n;
	int tong = 0;
	while(b){
		tong += b % 10;
		b/=10;
	}
	if(tong % 2 != 0)
		return 1;
	else
		return 0;
}

int check(long long n){
	long long c = n;
	while(c){
		long long x = c % 10;
		c /= 10;
		if ( x % 2 == 0)
			return 0;
	}
	return 1;
}

void solve(){
	long long n;
	scanf("%lld",&n);
	if (tn(n) == 1 && tongchuso(n) == 1 && check(n) == 1)
		printf("YES\n");
	else{
		printf("NO\n");
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
}
