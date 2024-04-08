#include<stdio.h>
#include<math.h>

int checkchuso(int n){
	while(n){
		int x = n % 10;
		n /= 10;
		if(x == 1 || x == 4 || x == 6 || x == 8 || x == 9)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	if(checkchuso(n) == 1)
		printf("YES\n");
	else
		printf("NO\n");
}
