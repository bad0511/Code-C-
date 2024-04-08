#include<stdio.h>
#include<math.h>
#define ll long long

ll nghichdao(ll n){
	ll b = n;
	ll lat = 0;
	while(b>0){
		lat = lat * 10 + b % 10;
		b /= 10;
	}
	return lat;
}

int a[100];

int main(){
	ll n;
	scanf("%lld",&n);
	ll k = nghichdao(n);// buoc tim nghich dao nay de thoa man yeu cau in theo thu tu xuat hien cua bai toan
	while (n > 0){
		int x = n % 10;
		if( x == 2 || x == 3 || x == 5 || x == 7)
			a[x]++;
		n /= 10;
	}
	while(k > 0){
		int x = k % 10;
		if(x == 2 || x == 3 || x == 5 || x == 7){
			if(a[x] > 0){
				printf("%d %d\n",x,a[x]);
				a[x] = 0;
			}
		}
		k /= 10;
	}
	return 0;
}
