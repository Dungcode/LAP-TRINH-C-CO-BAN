//chuong trinh nhap vao ban kinh hinh tron , tinh dien tich
#include <stdio.h>
#define PI 3.14

void main()
{
	float fR;
	printf("Nhap vao ban kinh hinh tron:");
	scanf("%f",&fR);
	printf("Dien tich hinh tron la:%.2f.\n",2*PI*fR);
	getch();
	
}


