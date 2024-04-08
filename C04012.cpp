#include<stdio.h>
#define ll long long

int cnt[10000001] ={0};

int main(){
	int n;
	scanf("%d",&n);
	ll a[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%lld",&a[i]);
		cnt[a[i]]++;
	}
	int check = 0;
	for(int i = 0 ; i <n ; i++){
		int dem = 0;
		if(cnt[a[i]] > 1){
			printf("%lld ", a[i]);
			cnt[a[i]] = 0; // nhu 1 cau lenh de ket thuc , neu ko co cau lenh nay thi tiep tuc cnt[a[i]] lai > 1
			check = 1;
		}
	}
	if(check == 0)
		printf("0");
}
