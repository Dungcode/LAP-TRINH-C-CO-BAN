// tinh tong 1!+2!+...+n!
#include <stdio.h>

int main(){
	unsigned int n;
	unsigned long long sum = 0;
	unsigned long long gt = 1;
	printf("Nhao so nguyen duong n: ");
	scanf("%d",&n);
	int i;
	for (i = 1; i <= n; i ++){
		gt *= i;	// gt: i!
		sum += gt; // sum = sum + i!
	}
	printf("Sum = %lld\n",sum);
return 0;
}


