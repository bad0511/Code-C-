#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int chan[100];
	int le[100];
	int dc = 0, dl = 0;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i < n ; i++){
		if (a[i] % 2 == 0){
			chan[dc] = a[i];
			++dc;
		}
		else{
			le[dl] = a[i];
			++dl;
		}
	}
	for(int i = 0 ; i < dc ; i++){
		printf("%d ",chan[i]);
	}
	printf("\n");
	for(int i = 0 ; i < dl ; i++){
		printf("%d ",le[i]);
	}
}
