#include<stdio.h>

char c[100];

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		c[i] = 'A' + 2 * i;	
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = i ; j < n ; j++){
			printf("%c",c[j]);
		}
		printf("\n");
	}
}
