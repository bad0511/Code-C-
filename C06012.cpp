#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int ngto(int n){
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("\n");
		char c[500];
		gets(c);
		int l = strlen(c);
		int check = 1;
		for(int i = 0 ; i < l/2 ; i++){
			if(c[i] != c[l-i-1])
				check = 0;
		}
		for(int i = 0 ; i < l ; i++){
			if(ngto((c[i] - '0')) == 0)
				check = 0; 
		}
		if(check == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
