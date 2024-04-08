#include<stdio.h>
#include<math.h>

int ucln(int a, int b){
	while(b){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long bcnn(int a, int b){
	long long boichungnhonhat = (1ll*a*b)/ucln(a,b);
	return boichungnhonhat;
}

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	printf("%d\n%lld", ucln(a,b), bcnn(a,b));
}
