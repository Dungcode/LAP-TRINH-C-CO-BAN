//3.13 Liet ke n so chinh phuong, fibonacci
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int nhapN(){
	int n;
	while(n <= 0){
		printf("Nhap n > 0: ");
		scanf("%d",&n);
	}
	return n;
}
bool ktraSoNT(int n){
	if(n < 2){
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}	
	}
	return true;
}
void lietKeSoNT(int (n)){
	printf("\n%d So nguyen to dau tien : ",n);
	int i = 2;
	while (n > 0){
		if( ktraSoNT(i)) {
			printf("%d, ",i);
			n--;
		}
		i++;
	}
}
void lietKeFibo(int n){
	printf("\n%d so Fibonacci dau tien: ",n);
	long long f0 = 0, f1 = 1, fn;
	int i;
	for(i = 0; i < n; i ++){
		if(i <= 1){
			fn = i;
		}else {
			fn = f1 + f0;
			f0 = f1;
			f1 = fn; 
		}
		printf("\nF%d = %lld", i, fn);
	}
}
void lietKeChinhPhuong(int n){
	printf("\n%d so chinh phuong dau tien : " , n ) ;
	int i;
	for(i =0; i <= n; i++){
		printf("%d, ", i * i);
	}
}
int main(){
	int n = nhapN();
	lietKeSoNT(n);
	lietKeFibo(n);
	lietKeChinhPhuong(n);
return 0;
}


