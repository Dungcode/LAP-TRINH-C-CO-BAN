#include <stdio.h>

int main(){
	int i ; 
	int sum = 0;
	for (i = 0;  i < 10;i ++ ){
		sum += i;
	
	}
	printf("sum = %d\n", sum);
	for (; ;)	{
		if(i>=10)
		break;
		sum+=i;
		i++;
		}
		
		printf("sum = %d",sum);
	
	
return 0;
}


