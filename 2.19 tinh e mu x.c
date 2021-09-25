//2.19 tinh e mu x
#include <stdio.h>

int main(){
	double a, x;				
	printf("Nhap x va a: ");	
	scanf("%lf%lf", &x, &a);	
		
	long long kGiaiThua = 1;	
	int k = 0;					// bien chay
	double xMuK = 1;			//
	double kq = 0;					// luu  chu ket qua
	double tam = xMuK / kGiaiThua;		// gia tri tam thoi
	
	while(tam >= a){
		kq += tam;			//kq cong them mot luong = tam
		k++;					
		xMuK *= x;			// xMuK nhan them mot luong = x
		kGiaiThua *= k;		
		tam = xMuK / kGiaiThua;		//cap nhat lai bien tam
	}
	printf("e^%0.2lf = %lf", x, kq);
return 0;
}


