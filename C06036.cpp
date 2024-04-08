#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

char c[1000000];

int main(){
	gets(c);
	printf("%d",strlen(c)-1);
}
