#include<stdio.h>
#include<math.h>

int main(){
	int m,n;
	scanf("%d %d",&m, &n);
	int c1 = sqrt(m), c2 = sqrt(n);
	if(c1*c1 == m){
		printf("%d\n",c2-c1+1);
		for(int i = c1 ; i <= c2 ; i++){
			printf("%d\n",i*i);
		}
	}
	else{
		printf("%d\n",c2-c1);
		for(int i = c1 + 1 ; i <= c2 ; i++){
			printf("%d\n",i*i);
		}
	}
}
