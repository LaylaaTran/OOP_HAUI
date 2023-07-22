#include<bits/stdc++.h>
/*
So do ket tap va ke thua
-TV co constructor khong doi 
x.tennhasx, x.diachi, khai baos freind tivi trong nsx ,
*/

using namespace std;

//code lop ket tap truoc NSX or Date

class NSX{
	private :
		char tenNSX[20];
		char diaChi[30];
		friend class TIVI;
	public :
		friend class HANG;
		void input();
		void output();
	
};

void NSX::input(){
	cout << "Nhap ten nha sx : "; fflush(stdin); gets(tenNSX);
	cout << "Nhap dia chi : "; fflush(stdin); gets(diaChi);
}

void NSX::output(){
	cout << " Ten nha sx la : " <<tenNSX<< endl;
	cout << "Dia chi la : " <<diaChi<<endl;
}
 //class hang or date
 class HANG{
 	protected :
 		char tenHang[20];
 		NSX x;
 		float donGia;
 	public :
 	
 		void input();
 		void output();
 		HANG();
};

void HANG::input(){
	cout <<"Nhap ten hang : "; fflush(stdin); gets(tenHang);
	x.input();
	cout << "Nhap don gia la : "; cin>>donGia ;
}

void HANG::output(){
	cout <<" Ten hang la : " <<tenHang << endl;
	x.output();
	cout << "Don gia la :" <<donGia << endl;
}

HANG::HANG(){
	strcpy(tenHang,"");
	strcpy(x.tenNSX, "");
	strcpy(x.diaChi,"");
	donGia=0;
}

class DATE{
	private :
		int d, m, y;
	public :
		friend class TIVI;
		void input();
		void output();
};

void DATE::input(){
	cout << "Nhap ngay  la :" ; cin>>d;
	cout << "Nhap thang la : "; cin>>m;
	cout <<"Nhap nam al : "; cin>>y;
}

void DATE::output(){
	cout << "Ngay la : " << d <<"/"<< m <<"/"<< y <<endl;

}
//TIVI CON CUA HANG
class TIVI : public HANG{
	private :
		char kichThuoc[30];
		DATE ngayNhap;
	public :
		void input();
		void output();
		TIVI();
};

void TIVI::input(){
	HANG::input();
	cout << "Nhap kich thuoc : " ; fflush(stdin); gets(kichThuoc);
	ngayNhap.input();
}

void TIVI :: output(){
	HANG::output();
	cout << "Kich thuoc la : "<<kichThuoc<<endl;
	ngayNhap.output();
}

TIVI :: TIVI(){
	strcpy(this->kichThuoc , "0*0");
	ngayNhap.d = ngayNhap.m = ngayNhap.y = 0;
	strcpy(tenHang, "");
	strcpy(x.tenNSX,"");
	strcpy(x.diaChi, "");
}


int main(){
	TIVI a;
	a.input();
	a.output();

}
