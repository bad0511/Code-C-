#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define N 1000005

int a[N];
int cnt[N];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i = 1 ;i <= N ; i++){
			cnt[i] = 0;
		}
		for(int i = 1 ; i <= n ; i++){
			scanf("%d",&a[i]);
			cnt[a[i]]++;
		}
		int tansuatmax = 0;
		for(int i = 1 ; i <= n ; i++){
			if(cnt[a[i]] > tansuatmax){
				tansuatmax = cnt[a[i]];
			}
		}
		for(int i = 1 ; i <= n ; i++){
			if(cnt[a[i]] == tansuatmax){
				printf("%d ",a[i]);
				cnt[a[i]] = -1; // tranh in trung
			}
		}
		printf("\n");
	}
}
