#include <stdio.h>

int main(){
	int sum = 0, i = 5;
	do{
		sum+=i;
		++i;
		printf("Sum= %d\n",sum);
	}while (i<10);
	
return 0;
}


