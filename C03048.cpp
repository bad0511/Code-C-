#include<stdio.h>
#include<math.h>

int check(long long n){
	int dem1 = 0 , dem2 = 0;
	if(n % 2 == 0){
		while(n){
			long long x = n % 10;
			n /= 10;
			if(x % 2 == 0)
				dem1++;
			else
				dem2++;
		}
		if(dem1 > dem2)	
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(check(n))
			printf("YES\n");
		else
			printf("NO\n");
	}
}
