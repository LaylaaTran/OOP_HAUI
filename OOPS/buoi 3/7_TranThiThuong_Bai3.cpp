#include<bits/stdc++.h>

using namespace std;

class MAY{
	private:
		int Mamay;
		char Kieumay[30], Tinhtrang[30];
	public :
		void Nhap();
		void Xuat();
	
};

void MAY::Nhap(){
	cout<<"Nhap ma may la : " ; cin >>Mamay;
	cout<<"Nhap kieu may : " ; fflush(stdin) ; gets(Kieumay);
	cout<<" Nhap tinh trang : "; fflush(stdin); gets(Tinhtrang);
}

void MAY::Xuat(){
	cout<<"Ma may la :" <<Mamay<<endl;
	cout<<"Kieu may la : " <<Kieumay<<endl;
	cout<<"Tinh trang la : " <<Tinhtrang<<endl;
}

class QUANLY{
	
	private :
		int Maql;
		char Hoten[30];
	public :
		void Nhap();
		void Xuat();
};

void QUANLY::Nhap(){
	cout<<"Nhap ma quan li la :" ; cin>>Maql;
	cout<<"Nhap ho ten la :" ; fflush(stdin); gets(Hoten);
}

void QUANLY::Xuat(){
	cout<<"Ma quan li la :" << Maql<<endl;
	cout<<"Ho va ten la :"  << Hoten<<endl;
}

class PHONGMAY{
	private:
		int Maphong;
		char Tenphong[30];
		float Dientich;
		int n;
		QUANLY x;
		MAY *y= new MAY[n];
	public:
		void Nhap();
		void Xuat();
	
};

void PHONGMAY::Nhap(){
	cout<<"Nhap ma phong la : " ; cin>>Maphong;
	cout<<"Nhap ten phong la : " ; fflush(stdin); gets(Tenphong);
	cout<<"Nhap dien tich phong :" ; cin>>Dientich;
	cout<<"Nhap n="; cin>>n;
	x.Nhap();
	for(int i=0;i<n;i++){
		y[i].Nhap();
	}
}

void PHONGMAY::Xuat(){
	cout<<"Ma phong la : " <<Maphong <<endl;
	cout<<"Ten phong la : "<<Tenphong<<endl;
	cout<<"Dien tich phong la : "<<Dientich<<endl;
	x.Xuat();
	for(int i=0;i<n;i++){
		y[i].Xuat();
	}
}

int main(){
	PHONGMAY a;
	a.Nhap();
	a.Xuat();

}
