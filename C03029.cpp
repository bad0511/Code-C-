#include<stdio.h>
#include<math.h>

int sochandacbiet(long long n){
	int dem = 0;
	int dem1 = 0;
	long long bd = n;
	while(bd){
		bd = 1ll * bd/10;
		dem++;
	}
	if (n % 2 == 0){
		while(n){
			long long x = n % 10;
			n = 1ll * n / 10;
			if ( x % 2 == 0 && x!= 0)
				dem1++;
			if( x == 0)
				dem1++;
		}
	}
	else if(n % 2 != 0)
		return 0;
	if (dem == dem1)
		return 1;
	else{
		return 0;
	}
	
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1 ; i <= t ; i++){
		long long n;
		scanf("%lld",&n);
		if (sochandacbiet(n) == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
