#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

int tongcs(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int ngto(int n){
	for(int i = 2 ; i <= sqrt(n) ;i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}

int csngto(int n){
	while(n){
		int r = n % 10;
		if(!ngto(r)) 
			return 0;
		n /= 10; 
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int tm = 0;
		for(int i = a ; i <= b ; i++){
			if(ngto(tongcs(i)) && ngto(i) && csngto(i))
				tm++;
		}
		printf("%d\n",tm);
	}
}

