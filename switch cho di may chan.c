#include<stdio.h>

int main(){
	int luaChon;
	
		printf("Cau hoi: Con cho di chuyen bang may chan?\n");
		printf("A. 1\nB. 2\nC. 3\nD. 4\n0. Thoat");
		printf("Nhap dap an cua ban: \n");
		luaChon = getch();// nhap vao mot ki tu
	
		switch( luaChon){
		
			case 'a':
			case 'A':
			case 'b':
			case 'B':
			case 'c':
			case 'C':{
				printf ("Rat tiec, Ban da tra loi sai!\n");
				break;
			}
			case 'd':
			case 'D':{
				printf("\aChinh xac, xin chuc mung !\n");
				break;
			}
			default:
				printf("Dap an ban chon khong phu hop!\n");
		
	}
return 0;
	
}
