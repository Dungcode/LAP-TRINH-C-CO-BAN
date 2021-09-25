//2.18 tinh PI
#include <stdio.h>

int main(){
	double c;
	printf("Nhap do chinh xac c: ");
	scanf("%lf", &c);
	
	int k = 0;
	double res = 0; 				// res laf gia tri luu 1/4 so PI
	int signal =-1; 				// bien danhs dau
	double tg = 1.0 / (2 * k + 1 );  //bien tam thoi
	while (tg >= c){				//kiem tra gt hien thoi 
		tg = 1.0 / (2 * k + 1 );	//tu apdate tg
		res += -1 * signal * tg;   // -1 mu k chinsh bang -1* signal
		signal *= -1;  				// tu dao dau sau moi lan 
		k ++;					 	//
	}
	double PI = 4 * res;
	printf("PI = %0.8lf", PI);
return 0;
}


