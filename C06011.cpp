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
		int l = strlen(c);
		int check = 1;
		int sum = 0;
		if(c[0] != 56 || c[l-1] != 56)
			check = 0;
		for(int i = 0 ; i < l/2 ; i++){
			if(c[i] != c[l-i-1]){
				check = 0;
			}
			sum += c[i] - '0';
		}
		if(sum % 10 == 0 && check)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
