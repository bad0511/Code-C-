#include<stdio.h>
#include<math.h>
#define ll long long
ll F[100];

void ktao(){
	F[1] = 1;
	F[2] = 1;
	for(int i = 3 ; i <= 92 ; i++){
		F[i] = F[i-1] + F[i-2];
	}
}



int main(){
	int t;
	scanf("%d",&t);
	ktao();
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%lld\n",F[n]);
	}
}
