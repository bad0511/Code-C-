//#include<stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i = 1 ; i <= n ; i++){
//		int x;
//		scanf("%d",&x);
//		for(int j = 2 ; j <= x ; j++){
//			while(x % j == 0){
//				printf("%d ",j);
//				x /= j;
//			}
//		}
//		if(x!= 1){
//			printf("%d\n",x);
//		}
//	}
//}

#include<stdio.h>
#include<math.h>

int main(){
	int n,x;
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++){
		scanf("%d",&x);
		int j = 2;
		while(x>1){
			while(x % j == 0){
				printf("%d ", j);
				x /= j;
			}
			j++;
		}
		printf("\n");
	}
}
