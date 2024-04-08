#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

ll t;
ll x1,x2;

ll changemin(ll x){
	ll res = 0;
	ll mu = 1;
	while(x){
		ll k = x % 10;
		if(k == 6)
			k = 5;
		res = k * mu + res;
		x /= 10;
		mu *= 10;
	}
	return res;
}

ll changemax(ll x){
	ll res = 0;
	ll mu = 1;
	while(x){
		ll k = x % 10;
		if(k == 5)
			k = 6;
		res = k * mu + res;
		x /= 10;
		mu *= 10;
	}
	return res;
}

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld",&x1,&x2);
		printf("%lld %lld\n",changemin(x1)+changemin(x2), changemax(x1)+changemax(x2));
	}
}
