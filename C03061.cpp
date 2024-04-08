#include<stdio.h>
#include<math.h>

int sodep1(long long n){
	long long chusocuoi = n % 10;
	long long a = n;
	long long x;
	while(a){
		x = a % 10;
		a /= 10;
	}
	if ( x == 2 * chusocuoi || chusocuoi == 2 * x )
		return 1;
	else
		return 0;
}

int demchuso(long long n){
	int dem = 0;
	while(n){
		n /= 10;
		dem++;
	}
	return dem;
}

int sodep2(long long n){
	long long b = n;
	long long x;
	while(b){
		x = b % 10;
		b /= 10;
	}
	long long y = (n - x *pow(10,demchuso(n)-1))/ 10;
	long long c = y;// gan 1 so c de check lai o cuoi
	long long lat = 0;
	while(y){
		lat = lat * 10 + y % 10;
		y /= 10;
	}
	if (lat == c)
		return 1;
	else
		return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if (sodep1(n) == 1 && sodep2(n) == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
