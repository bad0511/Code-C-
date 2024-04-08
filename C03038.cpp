#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int x;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p;
		scanf("%d%d",&n,&p);
		x = 0;
		for(int i = 1 ; i <= n ; i++){
			int j = i;
			if(j % p == 0){
				while(j % p == 0){
					++x;
					j /= p;
				}
			}
		}
		printf("%d\n",x);
	}
}
