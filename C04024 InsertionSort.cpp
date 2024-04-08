#include<stdio.h>

void InsertionSort(int a[], int n){
	for(int i = 1 ; i < n ; i++){
		int pos = i - 1;
		int value = a[i];
		while(pos >= 0 && value > a[pos]){
			a[pos+1] = a[pos];
			--pos;
		}
		a[pos + 1] = value;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	InsertionSort(a,n);
	for(int i = 0 ; i < n ; i++){
		printf("%d ",a[i]);
	}
}
