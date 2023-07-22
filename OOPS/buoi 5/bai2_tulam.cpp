#include<bits/stdc++.h>

using namespace std;

class PRINTER{
	protected :
		int trongLuong;
		char hangSX[30];
		int namSX;
		int tocDo;
};

class LASERPRINTER : public PRINTER{
	int matDoKim;
	public :
		void input();
		void output();
};

class DOTPRINTER : public PRINTER{
	int doPhanGiai ;
	public :
		void input();
		void output();
};

void LASERPRINTER::input(){
	cout << " Nhap trong luong la :"; cin>>trongLuong;
	cout << "Nhap hang san xuat la : "; fflush(stdin); gets(hangSX);
	cout << "Nhap nam san xuat la : "; cin >> namSX;
	cout << " Nhap toc do san xuat la : "; cin >>tocDo;
	cout << " Nhap mat do kim la : "; cin>>matDoKim;
}

void LASERPRINTER :: output(){
	cout << " Trong luong la : " << trongLuong << endl;
	cout << "Hang san xuat la : "<< hangSX << endl;
	cout << "Nam san xuat la : " << namSX << endl;
	cout << "Toc do san xuat la : " << tocDo << endl;
	cout << "Mat do san xuat la : " << matDoKim << endl;
}

void DOTPRINTER :: input(){
	cout << " Nhap trong luong la :"; cin>>trongLuong;
	cout << "Nhap hang san xuat la : "; fflush(stdin); gets(hangSX);
	cout << "Nhap nam san xuat la : "; cin >> namSX;
	cout << " Nhap toc do san xuat la : "; cin >>tocDo;
	cout <<  "Nhap do phan giai la : "; cin >> doPhanGiai;
}

void DOTPRINTER :: output(){
	cout << " Trong luong la : " << trongLuong << endl;
	cout << "Hang san xuat la : "<< hangSX << endl;
	cout << "Nam san xuat la : " << namSX << endl;
	cout << "Toc do san xuat la : " << tocDo << endl;
	cout << "Do phan giai la : " << doPhanGiai << endl;
}

int main(){
	LASERPRINTER *a;
	int n;
	cout << "Nhap so luong may laserprinter : " ; cin >> n;
	a = new LASERPRINTER[n];
	for(int i=0;i<n;i++){
		cout<< "May laserprinter thu " << i+1 << endl;
		a[i].input();
	}
	
	for(int i = 0 ;i <n ; i++){
		cout << "May laserprinter thu " << i+1 <<endl;
		a[i].output();
	}

	
	DOTPRINTER b;
	b.input();
	b.output();
}
