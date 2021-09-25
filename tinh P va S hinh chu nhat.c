#include <stdio.h>
//
//int main(){
//	float a, b;
//	printf("Nhap vao hai canh hinh chu nhat a va b: ");
//	scanf("%f%f",&a,&b);
//
//	if(a > 0 && b > 0){
//		printf("Chu vi hinh chu nhat la:%0.2f\n",(a+b)*2);
//		printf("Dien tich hinh chu nhat la:%0.2f\n",a*b);
//	}else {
//		printf("Nhap canh  > 0\n");
//	}
//		
//	return 0;
//}


int main(){
	float a, b;
	printf("Nhap hai canh a va b: ");
	scanf("%f%f",&a,&b);
	
	if (a > 0 && b > 0){
		float P = (a + b)*2;
		float S = a * b;
		
		printf("Chu vi = %0.2f\n", P);
		printf("Dien tich = %0.2f\n", S);
	}else{
		printf("Vui long nhap so > 0");
		}
	return 0;
}
