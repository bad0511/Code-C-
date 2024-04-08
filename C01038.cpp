#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	int lat = 0;
	while(n){
		lat = lat * 10 + n % 10;
		n /=  10;
	}
	printf("%d",lat);
}
