#include<bits/stdc++.h>

using namespace std;

class NSX{
	private :
		int Mansx;
		char Tennsx[30];
		int Dcnsx;
	public :
		void Nhap();
		void Xuat();
	
};

void NSX::Nhap(){
	cout<<"Nhap Mansx la :" ; cin>>Mansx;
	cout<<"Nhap Tenn sx la : " ; fflush(stdin); gets(Tennsx);
	cout<<"Nhap Dcnsx la :"; cin >>Dcnsx;
}

void NSX::Xuat(){
	cout<<" Mansx la :" <<Mansx<<endl;
	cout<<"Tenn sx la : " <<Tennsx<<endl;
	cout<<"Dcnsx la :" <<Dcnsx<<endl;
}

class HANG{
	private:
		int Mahang;
		char Tenhang[30];
		NSX x;
	public :
		void nhap();
		void xuat();
};

void HANG::nhap(){
	cout<<"Nhap Ma hang la :"; cin>>Mahang;
	cout<<"Nhap Ten hang la :"; fflush(stdin); gets(Tenhang);
	x.Nhap();
}

void HANG::xuat(){
	cout<<"Ma hang la : "<<Mahang<<endl;
	cout<<"Ten hang la :" <<Tenhang<<endl;;
	x.Xuat();
}

int main(){
	HANG a;
	a.nhap();
	a.xuat();

}
