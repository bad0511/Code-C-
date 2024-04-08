#include<stdio.h>

void merge(int a[], int l , int m , int r){
	int n1 = m - l + 1; // so phan tu tu left -> mid
	int n2 = r - m ; // = r - (m+1) + 1  // so phan tu tu (mid+1) den right
	int x[n1],y[n2];//luu n1 phan tu vao mang x , luu n2 phan tu vao mang y
	// Sau do dua cac phan tu tu chi so l -> m vao mang x
	for(int i = 0 ; i < n1 ; i++){
		x[i] = a[l+i];
	}
	for(int i = 0 ; i < n2 ;i++){
		y[i] = a[m+i+1];
	}
	// Sau do ta se tron 2 mang x,y lai => gan lai vao cho mang a[l,r]
	int i = 0 , j = 0 , index = l;
	while(i < n1 && j < n2){
		if(x[i] <= y[j]){
			a[index++] = x[i++];
		}
		else{
			a[index++] = y[j++];
		}
	}
	while(i < n1){
		a[index++] = x[i++];
	}
	while(j < n2){
		a[index++] = y[j++];
	}
}

void mergeSort(int a[], int l , int r){
	if(l < r){
		int m = (l+r)/2;
		mergeSort(a,l,m);//goi de quy nua ben trai
		mergeSort(a,m+1,r);//goi de quy nua ben phai
		//luc nay da sap xep xong 2 ben trai phai , ta dem di tron 2 ben bang cach goi ham merge phia tren
		merge(a,l,m,r);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n-1);
	for(int i = 0 ; i < n ; i++){
		printf("%d ",a[i]);
	}
}

