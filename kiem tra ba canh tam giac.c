#include <stdio.h>
#include<math.h>

int main(){
	float a, b, c;
	printf("Nhap ba canh: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a > 0 && b > 0 && c > 0){
			//c1 bat dang thuc tam giac
		if(abs(a - c) < b && b < (a + c)){
			printf("Ba so lap thanh mot tam giac!\n");
		}else {
			printf("Ba so khong tao thanh mot tam giac!\n");
		}
		// c2 ktra lan luot tung canh so voi tong hai canh con lai
		if(a < b + c && b < a + c && c < a + b){
			printf("Ba so lap thanh mot tam giac!\n");
		}else {
			printf("Ba so khong nhap thanh mot tam giac!\n");
		}
	}else {
		printf("Vui long nhap so duong!");
	}
	
return 0;
}


