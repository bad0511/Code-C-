#include<stdio.h>

void nhiphan(int n){
	if ( n == 0 )	
		return;
	else{
		nhiphan(n/2);
		printf("%d",n%2);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	nhiphan(n);
}
