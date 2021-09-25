//bai 20 ham de quy 
#include <stdio.h>

unsigned long long fibo(int n){
	if( n == 0 || n == 1) // dieu kien dung
		return n;
	else // truong hop can thuc hien de quy
		return( fibo( n - 1 ) + fibo( n - 2 ));
}

int main(){
	int i;
	for( i = 0; i < 10; i++){  // hien thi 21 ket qua
		printf("fibo(%d) = % lld \n", i, fibo (i));
	}
	
return 0;
}


