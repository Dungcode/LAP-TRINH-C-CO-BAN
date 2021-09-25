 //3.4 Ve tam giac can
#include <stdio.h>
#include <math.h>

int main(){
	int h;
	printf("Nhap chieu cao h : ");
	scanf("%d",&h);
	
	if(h > 0){
		int i, j;
		for(i = 1; i <= h; i ++){
			for(j = 1;j < 2 * h; j ++){
				if(abs(h - j) <= (i - 1)){	// abs la tri tuyet doi
					printf(" * ");
				}else {
					printf("   ");
				}
			}
			printf("\n");
		}
		
	}else {
		printf("Nhap h > 0! ");
	}
		
return 0;
}


