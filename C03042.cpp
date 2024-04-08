#include<stdio.h>

int sogiam(int n){
	while(n >= 10){
		// phai cho dieu kien n >= 10 de tranh truong hop vi du nhu n rut gon con` = 21 
		// thi x = 1 >= (21/10)%10 = 0 dang thi lai mac dinh so 0 dung truoc so 1 la sai 
		int x = n % 10;
		if(x >= ((n/10)%10))
			return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d", &a, &b);
		int dem = 0;
		for(int i = a ; i <= b ; i++){
			if(sogiam(i)){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
