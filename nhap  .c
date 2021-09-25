#include<stdio.h>

int main(){
	unsigned int n;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	unsigned int sum = 0;
	unsigned int i =1;
	 if(n < 0){
	 	printf("Hay nhap n > 0: \n");
	 }else{
	 	int i = 1,sum = 0;
	 	for(;i <= n;i++){
	 		sum +=i;		 
		} 
			printf("s = %d",sum);
	
	}
	return 0;
}
