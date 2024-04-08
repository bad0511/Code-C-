#include<stdio.h>

int main(){
	int sobo;
	scanf("%d",&sobo);
	int demle = 0;
	int demchan = 0;
	for(int i = 1 ; i <= sobo ; i++){
		int n;
		scanf("%d",&n);
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
		printf("%d %d\n",demle, demchan);
		demle = 0;
		demchan = 0;
	}
}
