#include<stdio.h>
#include<math.h>

int cnt[10000001];

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int max = -1e9;
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
		if(a[i] > max)
			max = a[i];
	}
	for(int i = 0 ; i <= max ; i++){
		if(cnt[i] > 1){
			dem++;
		}
	}
	printf("%d\n",dem);
	for(int i = 0 ; i <= max ; i++){
		if(cnt[i] > 1){
			printf("%d ",i);
			cnt[i] = 0;
		}
	}
}
