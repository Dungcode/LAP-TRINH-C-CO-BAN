// bai 18 ham so ngau nhien
#include <stdio.h>
#include <stdlib.h>  // thu vien ham Rand
#include <time.h>

int main(){
	
//	printf("Rand-Max = %d", RAND_MAX);
	srand(time(NULL));
	int i;
	for (i =0; i < 20; i++){
		int random = 1 + rand()%6;
		printf("%5d",random);
	}	
	
return 0;
}

