//2.15 tinh tong cac chu so
#include <stdio.h>

int main(){
	int n;
	printf("Nhap n > 0: ");
	scanf("%d",&n);
	
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	printf("Tong cac chu so cua so n = %d\n", sum);
return 0;
}


