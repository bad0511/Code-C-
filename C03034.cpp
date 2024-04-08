#include<stdio.h>
#include<math.h>

int uocchiahetcho2(int n){
	int dem = 0;	
	for(int i = 1 ; i <= sqrt(n) ; i++){
		if ( n % i == 0){
			if ( i % 2 == 0 )
				dem++;
			if((n/i) % 2 == 0)
				dem++;
			if(i % 2 == 0 && i == (n/i))
				dem--;
		}
	}
	return dem;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d",uocchiahetcho2(n));
		printf("\n");
	}
}
