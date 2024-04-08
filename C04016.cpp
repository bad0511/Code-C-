#include<stdio.h>
#include<math.h>

int cnt[10000001];

int ngto(int n){
	if ( n < 2 )
		return 0;
	for( int i = 2 ; i < sqrt(n) ; i++){
		if ( n % i == 0)		
			return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int j = 1 ; j <= t ; j++){
		int n;
		scanf("%d",&n);
		int a[n];
		int max = -1e9;
		for(int i = 0 ; i < n ; i++){
			scanf("%d",&a[i]);
			if(a[i] > max)
				max = a[i];
			if(ngto(a[i]))
				cnt[a[i]]++;
		}
		printf("Test %d:\n",j);
		for(int i = 0 ; i <= max ; i++){
			if(ngto(i) && cnt[i] != 0) 
				printf("%d xuat hien %d lan\n",i,cnt[i]);
				cnt[i] = 0;
		}
	}
}
