#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("\n");
		char c[500];
		gets(c);
		int length = strlen(c);
		int check = 1;
		for(int i = 0 ; i < length/2 ; i++){
			if(c[i] != c[length-i-1]){
				check = 0;
			}
			if((c[i] - '0') % 2 != 0){ // lay bang ma ascii de check
				// do so 0 trong ascii la 48(chan) nen chan - chan = chan , le - chan = le 
				check = 0;
			}
		}
		if(check){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
