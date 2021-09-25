//3.7 so thuan nghich 8 chu so chia het cho k
#include <stdio.h>
#include<stdbool.h>

 bool thuanNghich(int n) {
 	int m = n;
 	int tg = 0;  //
 	while (n > 0) {
 		tg = tg * 10 + n % 10;
 		n /= 10 ;			// n giam di 10 lan
	 }
	 return tg == m;	// so sanh tg vs bien ban dau m, k gan cho n vi sau khi vong lap n tien ve 0
 }
 
 bool chiaHet(int n, int k){
 	if(k == 0){
 		return false;
	 }
	 return n % k == 0;  // neu n chia het cho k thi trua
 }
 
int main(){
	int i, k;
	printf("Nhap so duong k: ");
	scanf("%d", &k);
	
	for(i = 10000000; i <= 99999999; i ++){
		if(thuanNghich(i) && chiaHet(i, k)){ // neu i la thuan nghich va dong thoi i chia het cho k
			printf("%10d", i);
		}
	}
	
	
return 0;
}


