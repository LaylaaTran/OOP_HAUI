#include<bits/stdc++.h>

using namespace std;

class HANG{
	private:
		friend class PHIEU;
		char tenHang[30];
		float donGia;
		int soLuong;
	public :
		void nhap();
		void xuat();
};

void HANG::nhap(){
	cout<<"Nhap ten hang : "; fflush(stdin); gets(tenHang);
	cout<<"Nhap don gia : "; cin>>donGia;
	cout<<"Nhap so luong : "; cin>>soLuong;
}

void HANG::xuat(){
	
	cout<<setw(15)<<left<<tenHang<<setw(15)<<left<<donGia<< setw(15)<<left<<soLuong<<donGia*soLuong<<endl;

}

class PHIEU{
	private:
		int n;
		char maPhieu[30];
		int ngayLap;
		char maNCC[30];
		char tenNCC[30];
		char diaChi[30];
		HANG *y;
	public :
		void nhap();
		void xuat();
};

void PHIEU::nhap(){
	cout<<"Nhap so hang n= "; cin>>n;
	cout<<"Nhap ma phieu : "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay thanh lap : "; cin>>ngayLap;
	cout<<"Nhap ma ncc : "; fflush(stdin); gets(maNCC);
	cout<<"Nhap ten ncc : "; fflush(stdin); gets(tenNCC);
	cout<<"Nhap dia chi : "; fflush(stdin); gets(diaChi);
	y=new HANG[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin vat thu "<<i+1<<" : " <<endl;
		y[i].nhap();
	}
}

void PHIEU::xuat(){
	cout<<endl<<"\t\t\t PHIEU NHAP HANG "<<endl;
	cout<<"Ma phieu : "<<maPhieu<<"\t";
	cout<<"Ngay lap : "<<ngayLap<<endl;
	cout<<"Ma NCC : "<<maNCC<<"\t\t";
	cout<<"Ten NCC :"<<tenNCC<<endl;
	cout<<"Dia chi : "<< diaChi<<endl;	

	cout<<setw(15)<<left<<"Ten hang"<<setw(15)<<left<<"Don gia"<< setw(15)<<left<<"So luong"<<"Thanh tien "<<endl;
	float Sum=0;
	for(int i=0;i<n;i++){
		y[i].xuat();
		Sum+=y[i].donGia*y[i].soLuong;
	}
	cout<<"\t\t\t\t     Cong thanh tien : "<<Sum;
}

int main(){
	PHIEU a;
	a.nhap();
	a.xuat();

}
