#include<stdio.h>
#include<math.h>

void ptich(int n){
	for(int i = 2 ; i <= sqrt(n) ; i++){
		int dem = 0;
		if (n % i == 0){
			while(n % i == 0){
				dem++;
				n /= i;
			}
			printf("%d(%d) ", i, dem);
		}
	}
	if (n != 1)
		printf("%d(1)",n);
	printf("\n");
}

int main(){
	int x;
	int t = 1;
	scanf("%d",&x);
	while(x--){
		int n;
		scanf("%d",&n);
		printf("Test %d: ",t);
		ptich(n);
		t++;
	}
}
