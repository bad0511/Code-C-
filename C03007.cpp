#include<stdio.h>
#include<math.h>

int ngto(int n){
	if ( n < 2 )
		return 0;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if ( n % i == 0)
			return 0;
	}
	return 1;
}

int tn(int n){
	int lat = 0;
	while (n){
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	return lat;
}


int main(){
	int x;
	scanf("%d",&x);
	int t = 1;
	while(x--){
		int a,b;
		scanf("%d %d", &a, &b);
		++t;
		if(t > 2)
			printf("\n");
		int dem = 0;
		for(int i = a ; i <= b ; i++){
			int temp = i;
			if ( (tn(i) == temp) && ngto(temp) == 1){
				printf("%d ", temp);
				dem++;
				if ( dem % 10 == 0)
					printf("\n");
			}
		}
		printf("\n");
	}
}
