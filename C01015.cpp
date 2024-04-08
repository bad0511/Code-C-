#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int delta = b*b - 4*a*c;
	if(delta >= 0){
		float x1 = 1.0 * (-b + sqrt(delta))	/ (2*a);
		float x2 = 1.0 * (-b - sqrt(delta)) / (2*a);
		if(x1 != x2){
		printf("%.2f %.2f", x1, x2);
		}
		else{
			printf("%.2f",x1);
		}
	}
	else{
		printf("NO");
	}
}
