#include <stdio.h>
/*	Toan tu toan hoc:+ - *  ++ -- % la phep chia du
	Toan tu so sanh:== != > >= < <=
	Toan tu logic:&& || ! va ,hoac ,phu dinh
	Toan tu gan: = += *= -= /= %=
*/

int main(){
	int a = 100, b = 200;
	int c,d;
	c = a%b;
	c = ++a;// a = a+1
	a = 100;
	d = a++;
	a != b;
	b++;// b = b+1
	printf("c=%d",c);
	printf("\nd=%d",d);
return 0;
}


