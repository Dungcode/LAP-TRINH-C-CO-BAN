//3.3 Ve tam giac vuong
#include <stdio.h>

int main(){
	int h;
	printf("Nhap h : ");
	scanf("%d",&h);
	
	if(h > 0){
		int i, j;
		for(i = 1; i <= h; i++ ){ 
			for(j = 1; j <= i; j ++){
				printf(" * ");
			}
			printf("\n");
		}
	}else{
		printf("Nhap h > 0: ");
	}
return 0;
}
// for(j = i; j <= h; j ++6) vuong goc tren tay phai


