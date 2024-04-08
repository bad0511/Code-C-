#include<stdio.h>
#include<math.h>

int ngto(int n){
	if ( n < 2 )
		return 0;
	for( int i = 2 ; i <= sqrt(n) ; i++){
		if ( n % i == 0)		
			return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
		if(ngto(a[i]))
			dem++;
	}
	printf("%d ",dem);
	for(int i = 0 ; i < n ; i++){
		if(ngto(a[i]))
			printf("%d ",a[i]);
	}
}
