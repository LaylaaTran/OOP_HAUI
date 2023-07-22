#include<bits/stdc++.h>

using namespace std;

class TAISAN{
	private :
		friend class PHIEU;
		char tenTaiSan[30];
		int soLuong;
		char tinhTrang[30];
	public  :
		void nhap();
		void xuat();
};

void TAISAN::nhap(){
	cout<<"Nhap ten sai san  :"; fflush(stdin); gets(tenTaiSan);
	cout<<"Nhap so luong : "; cin>>soLuong;
	cout<<"Nhap tinh trang : "; fflush(stdin); gets(tinhTrang);
}

void TAISAN::xuat(){
	cout<<setw(15)<<left<<tenTaiSan<< setw(15)<<left<<soLuong<<setw(15)<<left<<tinhTrang<<endl;
}

class PHONG{
	private :
		char tenPhong[30];
		char maPhong[30];
		char tenTruongPhong[30];
	public  :
		void nhap();
		void xuat();
	
};

void PHONG::nhap(){
	cout<<"Nhap ten phong : "; fflush(stdin); gets(tenPhong);
	cout<<"Nhap ma phong : "; fflush(stdin); gets(maPhong);
	cout<<"Nhap ten truong phong : "; fflush(stdin); gets(tenTruongPhong);
	
}

void PHONG::xuat(){
	cout<<"Kiem ke tai phong :"<<tenPhong;
	cout<<"         Ma phong : "<<setw(10)<<left<<maPhong<<endl;
	cout<<"Truong phong : " <<setw(10)<<left<<tenTruongPhong<<endl;
	
}


class PHIEU{
	private :
		int soTaiSan;
		char maPhieu[30];
		int ngayKiemKe;
		char nguoiKiemKe[30];
		char chucVu[30];
		PHONG b;
		TAISAN *a;
	public  :
		void nhap();
		void xuat();
};

void PHIEU::nhap(){
	cout<<"Nhap so tai san da kiem ke : "; cin>>soTaiSan;
	cout<<"Nhap ma phieu : "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay kiem tra : "; cin>>ngayKiemKe;
	cout<<"Nhap ten nguoi kiem tra : "; fflush(stdin); gets(nguoiKiemKe);
	cout<<"Nhap chuc vu : "; fflush(stdin); gets(chucVu);
	b.nhap();
	a=new TAISAN[soTaiSan];
	for(int i=0;i<soTaiSan;i++){
		cout<<"Nhap thong tin vat thu "<<i+1<<" : " <<endl;
		a[i].nhap();
	}
}

void PHIEU::xuat(){
	cout<<"\t\t\t\t PHIEY KIEM KE TAI SAN "<<endl;
	cout<<"Ma phieu : "<<setw(8)<<left<<maPhieu; 
	cout<<setw(8)<<right<<"Ngay kiem ke : "<<setw(8)<<left<<ngayKiemKe<<endl;
	cout<<"Nhan vien kiem ke : "<<setw(8)<<left<<nguoiKiemKe;
	cout<<setw(8)<<right<<" Chuc vu : "<<setw(8)<<left<<chucVu<<endl;
	b.xuat();
	int sum=0;
	cout<<setw(15)<<left<<"Ten tai san"<< setw(15)<<left<<"So Luong "<<setw(15)<<left<<"Tinh trang"<<endl;
	for(int i=0;i<soTaiSan;i++){
		a[i].xuat();
		sum+=a[i].soLuong;
		
	}
	
	cout<<"\n"<< "So tai san da kiem ke : " <<soTaiSan<<"\t  To so Luong :"<<sum;

}


int main(){
	PHIEU d;
	d.nhap();
	d.xuat();

}
