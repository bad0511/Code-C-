#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0 ; i < n ; i++){
		int check = 1;
		for(int j = 0 ; j < i ; j++){
			if(a[i] == a[j]){
				check = 0;
				break;
			}
		}
		if (check == 1){
			int dem = 1;//do da co 1 so xh lan dau la so dang xet
			for(int k = i + 1; k < n ; k++){
				if ( a[i] == a[k])
					dem++;
			}
			printf("%d %d\n",a[i],dem);
		}
	}
}
