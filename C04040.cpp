#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 1000005
#define ll long long

int t,n;
ll a[N];

ll solonhon(ll x,ll y){
	if(x>y)
		return x;
	else	return y;
}

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i = 1 ; i <= n ; i++){
			scanf("%lld",&a[i]);
		}
		ll sum = 0;
		ll res = -1e9;
		for(int i = 1 ; i <= n ; i++){
			sum = solonhon(a[i],sum+a[i]);
			res = solonhon(res,sum);
		}
		printf("%lld\n",res);
	}
}
