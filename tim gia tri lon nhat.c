#include <stdio.h>

int main(){
	int a, b, c, d;
	printf("Nhap 4 so nguyen a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
/*	su dung toan tu 3 ngoi, gan
	neu a > b dung thi gan cho a, neu khong thi gan cho b
*/
	int max = (a > b) ? a : b;
		max = (max > c) ? max : c;
		max = (max > d) ? max : d;
//	kiem tra gia tri dong thoi su dung &&		
	if(a == b && b == c && c == d){
		printf("Khong co gia tri lon nhat!");
	}else {
	printf("Gia tri lon nhat trong 4 so la:%d\n", max);
	}
	 
//	if(a > b && a > c && a > d){
//		printf("Max = a\n", a);
//	}else if(b > a, b > c, b > d){
//		printf("max = b\n",b);
//	}else if(c > a, c > b, c > d){
//		printf("max = c\n",c);
//	}else if(d > a, d > c, d > b){
//		printf("max = d\n",d);
//	}else if(a = b = c = d){
//		printf("khong co so lon nhat.");
//	}
return 0;
}


