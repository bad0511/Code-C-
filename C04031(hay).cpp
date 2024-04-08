#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 1000005

int t,n;
int a[N],cnt[N]; // b se la mang de dem do dai doan tang dai nhat roi so sanh voi max

int main(){
	scanf("%d",&t);
	for(int k = 1 ; k <= t ; k++){
		scanf("%d",&n);
		int max = 0;
		for(int i = 1 ; i <= n ; i++){
			scanf("%d",&a[i]);
		}
		printf("Test %d:\n",k);
		for(int i = 1 ; i <= n ; i++){
			cnt[i] = 0;
		}
		cnt[1] = 1;
		for(int i = 2 ; i <= n ; i++){
			if(a[i] > a[i-1]){
				cnt[i] = cnt[i-1] + 1;
			}
			else{
				cnt[i] = 1;
			}
		}
		for(int i = 1 ; i <= n ; i++){
			if(cnt[i] > max)
				max = cnt[i];
		}
		printf("%d\n",max);
		for(int i = 1; i <= n ; i++){
			if(cnt[i] == max){
				for(int j = i - max + 1 ; j <= i ; j++){
					printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
	}
}
