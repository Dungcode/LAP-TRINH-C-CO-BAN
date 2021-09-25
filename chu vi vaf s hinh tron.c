#include <stdio.h>
//#define PI 3.14

int main(){
	float r;
	const float PI = 3.141592f;
	printf("Nhap vao ban kinh: ");
	scanf ("%f", &r);
	
	if (r > 0){
		float C = 2*r * PI;
		float S = r * r * PI;
		printf("Chu vi hinh tron = %0.2f\n", C);
		printf("Dien tich hinh tron = %0.2f", S);
	}else {
		printf("Vui long nhap so > 0\n");
	}
return 0;
}


