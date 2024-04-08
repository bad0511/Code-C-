#include<stdio.h>
#include<math.h>

int ucln(int a, int b){
	if ( a == 0 || b == 0)
		return a+b;
	while(b){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long bcnn(int a, int b){
	return (1ll * a * b)/ucln(a,b);
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++){
		int a,b;
		scanf("%d %d",&a , &b);
		printf("%lld %d\n", bcnn(a,b), ucln(a,b));
	}
}
