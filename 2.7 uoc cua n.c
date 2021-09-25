// 2.7 uoc so cua n, dem có bao nhieu uoc
#include <stdio.h>

int main(){
	unsigned long n;
	unsigned long i;
	unsigned int counter = 0;
	
	printf("Nhap so tu nhien n: ");
	scanf("%ld",&n);
	
	 for(i = 1; i <= n; i ++){
	 	if(n % i ==0){
	 	printf("%ld, ",i);
	 	counter++;
	 	}
	 }
	 printf("\n%ld co tong so %d uoc so. \n",n, counter);	
return 0;
}


