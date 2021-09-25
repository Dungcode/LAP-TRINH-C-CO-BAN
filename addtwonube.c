// cong hai so nguyen
#include <stdio.h>
#include <conio.h>

int main(){
	//khai bao bien, so nguyen >> int
	int number1;
	int number2;
	
	//nhap du lieu vao,luu o cac bien, scanf doc du lieu vao tu ban phim
	puts("hay nhap so nguyen thu 1");
	scanf("%d",&number1);
	
	puts("hay nhap so nguyen thu 2");
	scanf("%d",&number2);
	
	// cong hai so nguyen 
	int sum=number1+number2;
	
	//hien thi kq ra man hinh
	printf("\t%d+%d=%d\n",number1, number2,sum);
	getch();
	
}
