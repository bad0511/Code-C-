#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i < n ; i++){
		int check = 1; // kiem tra xem a[i] da duoc in truoc do hay chua
		for ( int j = 0 ; j < i ; j++){
			if(a[i] == a[j]){
				check = 0;
				break;
			}
		}
		if ( check == 1)
			printf("%d ",a[i]);
	}
}
