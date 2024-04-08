#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main(){
	char c[1000];
	char d[1000];
	gets(c);
	gets(d);
	char *token = strtok(c," ");
	while (token != NULL){
		if(strcmp(token,d) != 0)
			printf("%s ",token);
		token = strtok(NULL," ");
	}
}
