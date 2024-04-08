#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int t;
ll n;

ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
	scanf("%d",&t);
	while(t--){
		ll res = 1;
		scanf("%lld",&n);
		for(ll i = 2 ; i <= n ;i++){
			res = res*i/gcd(res,i);
		}
		printf("%lld\n",res);
	}
}
