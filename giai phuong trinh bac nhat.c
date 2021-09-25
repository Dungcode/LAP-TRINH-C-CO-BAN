#include <stdio.h>

int main(){
	float a, b;
	printf("Nhap vao hai so a va b: ");
	scanf("%f%f",&a, &b);
	
	if (a == 0 && b != 0) {
		printf("Phuong trinh vo nghiem.\n");
	}else if(a == 0 && b == 0) {
		printf("Phuong trinh co nghiem dung voi moi x.\n ");
	}else {
		printf("Phuong trinh co nghiem duy nhat: x = %0.2f", -b / a);
	}
	
return 0;
}


