#include<stdio.h>
// Tim chi so dau tien cua phan tu x trong mang a da duoc sap xep
int first(int a[] , int n , int x){
	int res = -1 , l = 0 , r = n-1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			//tim them o ben trai xem co' con` x khong ?
			r = m - 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else{ // (a[m] > x)
			r = m - 1;
		}
	}
}

// Tim chi so cuoi cung cua phan tu x trong mang a da duoc sap xep
int last(int a[], int n , int x){
	int res = -1, l = 0 , r= n-1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			//tim them o ben phai xem co' con` x khong ?
			l = m + 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else{ // a[m] > x
			r = m - 1;
		}
	}
	return res;
}


int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	printf("%d %d",first(a,n,x) , last(a,n,x));
}
