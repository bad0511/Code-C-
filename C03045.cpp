#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int t;
ll n; 

int ngto(ll n){
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		if(ngto(n))
			printf("%lld\n",n);
		else{
			int x;
			for(int i = 1 ; i <= sqrt(n) ; i++){
				if(n % i == 0 && ngto(i)){
					while(n % i == 0){
						x = i;
						n /= i;		
					}
				}
				if(n != 1)
					x = n;
			}
			printf("%d\n",x);
		}
	}
}
