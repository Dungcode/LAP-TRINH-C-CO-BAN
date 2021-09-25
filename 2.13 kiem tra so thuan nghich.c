//2.13 kiem traa so thuan nghich
#include <stdio.h>

int main(){
	long n;
	printf("Nhap so n > 0: ");
	scanf("%ld",&n);
	long dao = 0;
	long m = n;
	while(m>0) {
		dao = dao * 10 + m % 10;
		m /= 10;
	}
	if (dao == n){
		printf("%ld la so thuan nghic!\n",n);
	} else {
		printf("%ld khong thuan nghich.\n",n);
	}
	
return 0; 
}


