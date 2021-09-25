#include <stdio.h>

int main(){
	// viet ct cho phep nguoi dung lua chon chuc nang:
	// cong tru nhan chia, chia nguyen hai so nguyen a,b
		
	int luaChon;
	do{		
		printf("\n====MENU====\n1.Tinh tong hai so nguyen."
			"\n2.Tinh hieu hai so nguyen."
			"\n3.Tinh tich hai so nguyen."
			"\n4.Tinh thuong hai so nguyen."
			"\n5.Chia lay du hai so nguyen."
			"\n0.Thoat.\nBan chon ?\n");
			scanf("%d",&luaChon);
			
		switch ( luaChon ){
			case 0: break;
			case 1: {
				int a, b;
				printf("\nNhap a, b: ");
				scanf("%d%d",&a, &b);
				printf("\n%d + %d = %d", a, b, a + b);
				break;
			}
			case 2: {
				int a, b;
				printf("\nNhap a, b: ");
				scanf("%d%d",&a, &b);
				printf("\n%d - %d = %d", a, b, a - b);
				break;
			}
			case 3: {
				int a, b;
				printf("\nNhap a, b: ");
				scanf("%d%d",&a, &b);
				printf("\n%d * %d = %d", a, b, a * b);
				break;
			}
			case 4: {
				int a, b;
				printf("\nNhap a, b: ");
				scanf("%d%d",&a, &b);
				printf("\n%d / %d = %d", a, b, a / b);
				break;
			}
			case 5: {
				int a, b;
				char c = '%';
				printf("\nNhap a, b: ");
				scanf("%d%d",&a, &b);
				printf("\n%d %c %d = %d", a, c, b, a % b);
				break;
			}
		}
	}while (luaChon != 0);
return 0;
}


