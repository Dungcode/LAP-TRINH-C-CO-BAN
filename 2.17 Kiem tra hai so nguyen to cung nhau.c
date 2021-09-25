//2.17 Kiem tra hai so nguyen to cung nhau
#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	
	if(a > 0 && b > 0){
		while ( a != b){
			if (a > b){
				a = a - b;
			}else {
				b = b - a;
			}
		}
		// uoc chung a, b
		if(a == 1){
			printf("Hai so nguyen to cung nhau.");
		}else {
			printf("hai so KHONG nguyen to cung nhau.");
		}
	}else {
		printf("Nhap lai a, b > 0!");
	}
return 0;
}


