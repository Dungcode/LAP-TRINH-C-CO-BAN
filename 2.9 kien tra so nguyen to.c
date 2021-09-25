//2.9 kiem tra n co phai la so nguyen to

#include <stdio.h>
#include<math.h>
int main(){
	unsigned int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if(n < 2){
		printf("%d khong phai la so nguyen to!\n", n);
	} else{
		int i;
		int mark = 1;
		for(i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				mark = 0;
				break;
			}
		}
		if(mark == 1){
		printf("%d la so nguyen to.\n", n);
		}else {
			printf("%d khong la so nguyen to.\n", n);
		}
	}
	
		
return 0;
}


// cách 2
//	int k;
//	printf("nhap so k = ");
//	scanf("%d",&k);
//	
//	int c = 0;
//	int n,i;
//	for (n = 2; n <= k; n++){
//		int laSoNT = 1;
//		for (i = 2; i <= sqrt(n) && laSoNT; i++)
//			laSoNT	= (n % i);
//		if(laSoNT){
//			printf("%d la so nguyen to \n",n);
//			c++;
//		}
//	}
//	printf("Co %d so nguyen to tu 2 den %d",c ,k);
//return 0;
//}
