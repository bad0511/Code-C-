#include<stdio.h>
#include<math.h>

int ngto(int n){
	if ( n < 2 )
		return 0;
	for (int i = 2 ; i <= sqrt(n); i++){
		if ( n % i == 0){
			return 0;
		}
	}
	return 1;
}

int checkchuso(int n){
	int bd = n;
	while(bd>0){
		int x = bd % 10;
		bd /= 10;
		if(x != 2 && x != 3 && x != 5 && x != 7)
			return 0;
	}
	if (ngto(n))
		return 1;
	return 0;
}

void solve(){
	int a,b;
	scanf("%d %d",&a ,&b);
	int dem = 0;
	for(int i = a ; i<= b; i++){
		if (checkchuso(i))
			dem++;
	}
	printf("%d\n",dem);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
}
