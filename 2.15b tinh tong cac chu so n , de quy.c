// 2.15b tinh tong cac chu so n , de quy
#include <stdio.h>

// n 		sum
// 1234		0
// 123	 	4
// 12		7
// 1		9
//
// n % 10 + tongcs(n / 0)
// n < 10 ? return n : return n % 10 + tongcs(n / 100);

int sumALLDigits(int n){
	if(n < 10){
		return n;
	}else {
		return n % 10 + sumALLDigits(n / 10);
	}
}
int main(){
	int result = sumALLDigits(456) ;
	printf("%d",result);
return 0;
}


