#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap vao hai so a,b: ");
	scanf("%d%d",&a,&b);
	
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	
	printf("%d + %d = %d.\n",a,b,sum);
	printf("%d - %d = %d.\n",a,b,sub);
	printf("%d * %d = %d.\n",a,b,mul);
	
	if(b==0){
		printf("khong thuc hien duoc phep chia.\n");
	}else {
//		float div =(float) a/b; // ep kieu tuong minh
		 float div =1.0f* a/b; // ep kieu khong tuong minh
		printf("%d / %d = %0.2f.\n", a, b, div);

//		 0.2 la lay hai so sau dau phay
	}
return 0;
}


