#include <stdio.h>

int main(){
	unsigned int n;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	unsigned int i;
	float sum = 0;
	if(n < 0){
		puts("ERROR\n");
	}else
	
	for (i = 1;i <= n; i++){
//		ep kieu tuong minh (Float)1/i ep kieu ngam dinh 1.0f/i
		sum +=1.0f/i;
	}
		printf("Sum = %0.2f",sum);
return 0;
}


