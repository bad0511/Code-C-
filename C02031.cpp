#include<stdio.h>

char c[100];

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		c[i] = 'A' + i + n - 2;
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n - i ; j++){
			printf("%c",c[j]);
			c[j]--;
		}
		printf("\n");
	}
}
