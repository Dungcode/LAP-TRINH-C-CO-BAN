//3.2 Ve hinh chu nhat bang cac chu x

#include <stdio.h>

int main(){
	int m, n;
	printf("Nhap hai so m, n: ");
	scanf("%d%d", &m, &n);
	
	if(m > 0 && n > 0){
		int i, j, x;
		for (i = 1; i <= m; i++){
			for(j = 1; j <= n; j++){
				printf(" x ");
			}
//			printf("\n");
		}
		
		
	}else {
		printf("Nhap so duong m, n : ");
	}
return 0;
}


