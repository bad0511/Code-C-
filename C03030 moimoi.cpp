#include<stdio.h>


int check(long long n){
	int a=n%10;
	while(n){
		long long x=n%10;
		n=n/10;
		if(a<x) return 0;
		else a=x;
	}
	return 1;
}

int main(){
	int a2[45];
	int a3[165];
	int a4[495];
	int a5[1287];
	int a6[3003];
	int j=0;
	for(int i=10;i<100;++i){
		if(check(i)){
			a2[j]=i;
			++j;
		}
	}
	j=0;
	for(int i=100;i<1000;++i){
		if(check(i)){
			a3[j]=i;
			++j;
		}
	}
	j=0;
	for(int i=1000;i<10000;++i){
		if(check(i)){
			a4[j]=i;
			++j;
		}
	}
	j=0;
	for(int i=10000;i<100000;++i){
		if(check(i)){
			a5[j]=i;
			++j;
		}
	}
	j=0;
	for(int i=100000;i<1000000;++i){
		if(check(i)){
			a6[j]=i;
			++j;
		}
	}
	
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n==2){
			for(int i=0;i<45;++i){
				printf("%d ", a2[i]);
			}
		}
		else if(n==3){
			for(int i=0;i<165;++i){
				printf("%d ", a3[i]);
			}
		}
		else if(n==4){
			for(int i=0;i<495;++i){
				printf("%d ", a4[i]);
			}
		}
		else if(n==5){
			for(int i=0;i<1287;++i){
				printf("%d ", a5[i]);
			}
		}
		else if(n==6){
			for(int i=0;i<3003;++i){
				printf("%d ", a6[i]);
			}
		}
		printf("\n");
	}
}
