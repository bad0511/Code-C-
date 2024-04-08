#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

ll t;
ll x1,x2;

ll changemin(ll x){
	while(x){
		int res = 0;
		int mu = 1;
		int k = x % 10;
		if(k == 6)
			k = 5;
		res = k * mu + res;
		x /= 10;
		mu *= 10;
	}
}

ll changemax(ll x){
	while(x){
		int res = 0;
		int mu = 1;
		int k = x % 10;
		if(k == 5)
			k = 6;
		res = k * mu + res;
		x /= 10;
		mu *= 10;
	}
}

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld",&x1,&x2);
		printf("%lld %lld\n",changemin(x1)+change(x2), changemax(x1)+changemax(x2));
	}
}
