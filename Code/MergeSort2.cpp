#include<stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n], b[m];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(int j = 0 ; j < m ; j++){
		scanf("%d",&b[j]);
	}
	int i = 0 , j = 0;
	int c[n+m];
	int index = 0;
	while(i < n && j < m){
		if(a[i] <= b[j]){
			c[index++] = a[i++];
		}
		else
			c[index++] = b[j++];
	}
	while(i < n)
		c[index++] = a[i++];
	while( j < m)
		c[index++] = b[j++];
	for(int i = 0 ; i < n+m ; i++){
		printf("%d ",c[i]);
	}
}
