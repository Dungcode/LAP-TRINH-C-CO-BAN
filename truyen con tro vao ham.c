// truyen con tro vao ham
#include <stdio.h>

// khi nao hti truyen con tro vao ham?
// 1. Khi muon ham duoc goi thay doi gia tri bien truyen vao
// 2. Khi muon truyen mang vao ham

void nhapN(int *n){  // * la con tro, gan vao de truyen dia chi bien
	*n = 500;
}

void hienThiMang(int *a,int n){  // thay vi khai bao int a[5] . thi khai bao don gian int *a
	int i;     	// n laf bien them vao, quy uoc la do dai hay khoi luong cua mang
	for(i = 0; i< n; i++){
		printf("%5d,", a[i]) ; // in ra gia tri cua a tai vi tri [i]
	}
}

void nhapM(int m){
	m = 400;
}
void doiCho(int m, int n){   // khong the nao thay do gia tri m va n, 
	int tmp = m;	// viec doi cho chi co hieu luc trong ham void nay
	m = n;			// ra khoi ham khong co tac dung
	n = tmp;	    // muon thay doi gia tri trong main thi phai gan con tro * vao trc m, va n .
}

int main(){
	int m = 100;
	int n = 200;
	
//	nhapN(&n);  // them dau & la truyen dia chi cua n
//	nhapM(m);
//	doiCho(m,n);
	
	int arr[] = {1, 2, 3, 4, 5}; // mang 1 chieu
	hienThiMang(arr, 5);		//truyen ten mang vao, ban chat cua mang 1 chieu cung la con tro 
								//nen chi can truyen ten mang vao la duoc
	
//	printf("m = %d\nn = %d\n", m, n);
return 0;
}


