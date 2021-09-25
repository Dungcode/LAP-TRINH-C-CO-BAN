//3.8 tim so nguyen to trong doan a , b
#include <stdio.h>
#include<stdbool.h>
#include<math.h>

bool nguyenTo(int n){
	if(n < 2){        		// neu n <2 k phai so ngto  >> ket thuc ham, return false
		return false;		// neu ham gap return thi ket thuc 
	}
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){			// n chia het cho i thi ket thuc, return false
			return false;
		}
	}
	return true;
}


int main(){
	int a ,b ;
	printf("Nhap a < b, a > 0: ");
	scanf("%d%d", &a, &b);
	
	if(a > 0 && b > 0){
		int i;
		for( i = a; i < b; i++){
			if(nguyenTo(i)){
				printf("%10d", i);
			}
		}
	}else{
		printf("Hay nhap a , b la so duong: ");
	}
	return 0;
}


