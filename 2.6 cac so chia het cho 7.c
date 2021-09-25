// nhap n tính tông cac só tu nhien khong lon hon n va chia het cho 7
#include <stdio.h>

int main(){
	unsigned int n;
	unsigned long long sum = 0;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	long i;

	for(i = 7;i <= n; i += 7){
		sum += i;
	}
	printf("\nTong cac so tu nhien nho hon %d chia het cho 7: %lld",n,sum);
return 0;
}


