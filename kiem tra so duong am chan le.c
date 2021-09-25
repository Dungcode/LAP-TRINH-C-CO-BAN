#include <stdio.h>

int main(){
	int a,rem;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	if (a >0){
		printf("\n%d a la so duong.",a);
	}else if(a == 0) {
		printf("\n%d a la so khong am khong duong.",a);
	}else {
		printf("\n%d a la so am",a);
	}
	if (a%2 == 0){
		printf("\n%d la so chan.",a);
	}else {
		printf("\n%d a la so le.",a);
	}
	return 0;
}
