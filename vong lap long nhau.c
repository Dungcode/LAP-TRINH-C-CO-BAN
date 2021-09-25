#include <stdio.h>

int main(){
	/*  ** cau lenh lua chon long nhau
		** vong lap long nhau
		** vong lap ket hop cau lenh lua chon
		** lenh break, contimue.
	*/
	int i,j,count =0;
	i = 100, j = 200;
//	 if(i>0){
//	 	printf("\ni,i cung>0");
//	 }
	 for(i = 0 ; i < 5; i ++){
	 	for (j = 0; j < 3; j ++){
	 		printf("%5d",count ++);
		 }
		 printf("\n\n");
	 }
//	 for (i = 0;i <= 10; i ++){
//	 	if(i%2 == 1)
//	 		continue ; 
//	 		printf("\ni = %d",i);
//	 }
//	 printf("\ni = %d", i);
return 0;
}


