#include<stdio.h>
#include<math.h>

void CountingSort(int a[], int n){
	int K = -1e9;
	for(int i = 0 ; i < n ; i++){
		K = fmax(K,a[i]);
	}
	int cnt[K+1] ={0};
	for(int i = 0 ; i < n ; i++){
		cnt[a[i]]++;
	}
	for(int i = K ; i >= 0 ; i--){
		for(int j = 0 ; j < cnt[i] ; j++){
			printf("%d ",i);
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	CountingSort(a,n);
}
