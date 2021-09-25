//2.8 uoc chung lon nhat va boi chung nho nhat a va b.
#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap a, b >0: ");
	scanf("%d%d", &a, &b);
	
	if(a >= 0 && b >= 0){ 
		if(a == 0 && b == 0){
		printf("Khong ton tai UCLN, BCNN!");	
	}else if (a == 0 || b == 0){
		printf("Khong co BCNN, UCLN = %d",(a == 0) ? b : a);	
	}else {  // a, b > 0
		int bc = a* b;
		while (a != b){
			if(a > b){
				a = a - b;
			}else {
				b = b - a;
			}
		}
			printf("UCLN = %d\n",a);
			printf("BCNN = %d\n",bc/a);	
		}
	
	}else {
		printf("Nhap a, b >0");
	}
	
	
return 0;
}


