#include<stdio.h>
#include<math.h>
void ptich(){
	int n;
	scanf("%d",&n);
	printf("%d = ",n);
	for(int i = 2 ; i <= sqrt(n) ; i++){
		int dem = 0;
		if(n % i == 0){ // i la thua so nguyen to cua n
			while(n % i == 0){
				dem++;
				n /= i;
			}
			printf("%d^%d", i,dem);
			if ( n != 1)
				printf(" * ");
		}
	}
	if(n != 1){ // neu chua phantich thua so nguyen to xong
		printf("%d^1",n,1);
	}
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ptich();
		printf("\n");
	}
}
