#include<stdio.h>
#include<math.h>

int main (){
	float a, b, c, denta,x, x1, x2;
	printf("Nhap bien a b c: ");
	scanf("%f%f%f",&a, &b, &c);
	
	if (a == 0){
		if(b == 0 && c != 0) {
			printf("Phuong trinh vo nghiem:");		
		}else if(b == 0 && c == 0){
			printf("Phuong trinh dung voi moi x: ");
		}else {
			printf("Phuong trinh co nghiem duy nhat x = %0.2f",-c / b);
		}
	}else {
		denta = b * b - 4 * a * c;	
		if (denta < 0){
			printf("Phuong trinh vo nghiem.");
		}else if(denta == 0){
			x = -b / (2 * a);
			printf("Phuong trinh co nghiem kep x = %0.2f", x);
		}else {
			x1 = (-b + sqrt(denta))/(2 * a);
			x2 = (-b - sqrt(denta))/(2 * a);
			printf("Phuong trinh co hai nghiem: \nx1 = %0.2f\nx2 = %0.2f ", x1, x2);
		}
	}
	
	return 0;
}
