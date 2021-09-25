//3.10 Dem va tinh TBC cac chu so 
#include <stdio.h>

int nhapN(){
	int n = 0;
	while (n <=0){
		printf("Nhap n > 0: ");
		scanf("%d",&n);
	}
	return n;
}
	
int demChuSo(int n){
	int count = 0;
	while(n > 0){
		count ++;
		n /= 10; 
	}
	
	return count;
}

int demChuSoLe(int n){
	int count = 0;
	int c;
	while(n > 0){
		c = n % 10;
		if(c % 2 != 0){
			count ++;
		}
		n /= 10; 
	}
	return count;
}
	
float tbc(int n){
	float tb = 0;
	int sl = demChuSo(n);
	int sum = 0;
	while (n > 0){
		sum += n % 10;
		n /= 10;
	}
	tb = (float)sum / sl;
	return tb;	
}
		
int main(){
	int n = nhapN();
	printf("\nSo chu so cua n: %d", demChuSo(n));
	printf("\nSo chu so  le cua n: %d", demChuSoLe(n));
	printf("\nTBC cac chu so cua n: %0.2f",tbc(n));
return 0;
}


