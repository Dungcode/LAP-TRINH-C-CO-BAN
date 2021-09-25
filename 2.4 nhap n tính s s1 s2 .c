#include <stdio.h>

int main(){
	unsigned int n, i;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);

	unsigned int sum = 0;
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

//	for (i = 1; i <=n;i++){
//		sum += i;
//		if(i % 2 ==0){
//			sum1 += i;
//		}else {
//			sum2 +=i;
//		}
//		
//	}
//		printf("S = %d",sum);
//		printf("\nS1 = %d",sum1);
//		printf("\nS2 = %d",sum2);



	printf("Tong cac so tu nhien < %d: ",n);
	for (i = 1; i <=n;i++){
		sum += i;		
	}	printf("S = %d",sum);
	printf("\nTong cac so tu nhien le < %d: ",n);
	for (i = 1;i <= n; i +=2){
		sum1 +=i; 
	}
		printf("S1 = %d",sum1);
	printf("\nTong cac so tu nhien chan < %d: ",n);
	for (i = 0;i <= n;i+=2){
		sum2 += i;
	}
		printf("S2 = %d",sum2);
		

return 0;
}


