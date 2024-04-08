#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int demle = 0;
	int demchan = 0;
	if ( n > 0 ){
		while(n){
			int x = n % 10;
			if(x % 2 == 0){
				demchan++;
			}
			else{
				demle++;
			}
			n /= 10;
		}
		printf("%d %d",demle ,demchan);
	}
	else{
		printf("0");
	}
}
