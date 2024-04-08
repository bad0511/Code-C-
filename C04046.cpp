#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i = 0 ; i < n ; i++){
			scanf("%d",&a[i]);
		}
		qsort(a,n,sizeof(int),cmp);
		int res_min = 1e9;
		int cnt = 0;
		for(int i = 1 ; i < n ; i++){
			if(a[i] - a[i-1] < res_min){
				res_min = a[i] - a[i-1];
				cnt = 1;
			}
			else if(a[i] - a[i-1] == res_min){
				cnt++;
			}
		}
		printf("%d %d\n",res_min,cnt);
	}
}

