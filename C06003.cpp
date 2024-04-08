#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("\n");
		char c[500];
		gets(c);
		int dem = 0;
		char *token;
		token = strtok(c," ");
		while(token != NULL){
			token = strtok(NULL," ");
			++dem;
		}
		printf("%d\n",dem);
	}
}
