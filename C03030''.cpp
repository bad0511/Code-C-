#include<stdio.h>
#include<math.h>
#define ll long long
int check(ll n){
	int chusocuoi = n % 10;
	while(n != 0){
		int chusokecuoi = n % 10;
		n /= 10;
		if (chusocuoi < chusokecuoi){
			return 0;
		}
		else{
			chusocuoi = chusokecuoi;
		}
	}
	return 1;
}

int main(){
	int t;
	scanf("%d\n",&t);
	ll a[7];
	ll p=1;
	for(int i=0;i<7;++i){
		a[i]=p;
		p=p*10;
	}
	while(t--){
	    int n;
		scanf("%d",&n);
		for(int i=a[n-1];i<a[n];++i){
			if(check(i)) printf("%d ",i);
		}
		printf("\n");
	}
}

