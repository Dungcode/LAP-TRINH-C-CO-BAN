// 2.14 tinh giai thua
#include <stdio.h>

int main(){
	long n;
	printf("Nhap n > 0: ");
	scanf("%ld",&n);
	unsigned long long gt = 1;
	if(n < 0) {
		printf("Nhap n > 0!");
	}else {
		int i;
		for(i = n; i >= 1; i--){
			gt *= i;
		}
		printf("%ld! = %lld",n, gt);
	}
	
return 0;
}


