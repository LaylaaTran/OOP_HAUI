#include<bits/stdc++.h>

using namespace std;

class PHIEU;

class SANPHAM{
	private:
		char maSP[30];
		char tenSP[30];
		int soLuong;
		int donGia;
	public :
		SANPHAM();
		SANPHAM(const char*a, const char*b, int c, int d);
		friend class PHIEU;
		double thanhTien(){
			return soLuong*donGia;
		}
		friend void Sort(PHIEU a);
		friend void Insert(PHIEU &a, SANPHAM b, int pos);
		friend void deleteP(PHIEU &a, int pos);
		friend void Change(PHIEU a);
		void input();
		void output();
};

SANPHAM::SANPHAM(){
	maSP[0]='\0';
	tenSP[0]='\0';
	soLuong =0;
	donGia=0;
}

SANPHAM::SANPHAM(const char *a, const char*b , int c, int d){
	strcpy(maSP,a);
	strcpy(tenSP, b);
	soLuong=c;
	donGia=d;
	}

void SANPHAM::input(){
	cout<<"Nhap ma san pham : " ; fflush(stdin); gets(maSP);
	cout<<"Nhap tensan pham : " ; fflush(stdin); gets(tenSP);
	cout<<"Nhap so luong : "; cin>>soLuong;
	cout<<"Nhap don gia : "; cin>>donGia;
}

void SANPHAM::output(){
	cout<<left<<setw(15)<<maSP<<setw(25)<<tenSP<<setw(25)<<soLuong<<setw(25)<<donGia<<setw(25)<<donGia*soLuong <<endl;
}

class NHACC{
	private:
		char maNCC[30];
		char tenNCC[30];
		char diaChi[30];
		double soDT;
	public :
		friend class PHIEU;
		void input();
		void output();
};

void NHACC::input(){
	cout<<"Nhap ma nha cung cap la : "; fflush(stdin); gets(maNCC);
	cout<<"Nhap ten nha cung cap la : "; fflush(stdin); gets(tenNCC);
	cout<<"Nhap dia chi nha cung cap la : "; fflush(stdin); gets(diaChi);
	cout<<"Nhap so dien thoai la : "; cin>>soDT;
}

void NHACC::output(){
	cout<<left<<"Ma nha cung cap :"<<setw(25)<<maNCC << "Ten nha CC : "<<setw(25)<<tenNCC<<endl;	
	cout<<left<<"Dia chi :"<<setw(25)<<diaChi <<"SDT : "<<setw(25)<<soDT<<endl;	
}

class PHIEU{
	private:
		int n;
		int sum=0;
		char maPhieu[30];
		char ngayLap[30];
		NHACC x;
		SANPHAM *y;
	public : 
		friend class SANPHAM;
		friend void Sortdown(PHIEU a);
		friend void Insert(PHIEU &a, SANPHAM b, int pos);
		friend void deleteP(PHIEU &a, int pos);
		friend void Change(PHIEU a);
		void input();
		void output();
};


void PHIEU::input(){
	cout<<"Nhap so luong san pham la : "; cin>>n;
	cout<<"Nhap ma phieu la : "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay lap : "; fflush(stdin); gets(ngayLap);
	x.input();
	
	y =new SANPHAM[n];
	for(int i=0;i<n;i++){
		y[i].input();
	}
	
}

void PHIEU::output(){
	cout<<"Dai hoc Victory "<<endl;
	cout<<"\t\t\t  PHIEU NHAP VAN PHONG PHAM "<<endl;
	cout<<left<<"Ma phieu :"<<setw(25)<<maPhieu<<"Ngay lap : "<<setw(25)<<ngayLap<<endl;
	x.output();
	cout<<left<<"Ma San Pham"<<setw(25)<<"Ten san pham "<<setw(25)<<"So Luong "<<setw(25)<<"Don gia "<<setw(25)<<"Thanh tien " <<endl;
	
	for(int i=0;i<n;i++){
		y[i].output();
			sum+=y[i].thanhTien();
		
	}
	
	cout<<right<<setw(35)<<"TONG"<<setw(65)<<sum<<"\n\n";
	sum =0; 
	cout<<left<<setw(25)<<" 	 Hieu truong "<<setw(25)<<"Phong tai chinh "<<setw(25)<<"Nguoi lap "<<endl;
	
}

void Sortdown(PHIEU a){
	for(int i=0;i<a.n;i++){
		for(int j=i+1;j<a.n;j++){
			if(a.y[i].thanhTien() < a.y[j].thanhTien()){
				swap(a.y[i] , a.y[j]);
			}
		}
	}
}


void Insert(PHIEU &a, SANPHAM b, int pos){
	a.y= (SANPHAM*)realloc(a.y, (a.n+1)*sizeof(SANPHAM));
	for(int i=a.n; i>= pos ; i--){
		a.y[i] = a.y[i-1];
	}
	
	a.y[pos-1]= b;
	a.n++;
}

void deleteP(PHIEU &a, int pos){
	
	for(int i=pos; i< a.n;i++){
		a.y[i]=a.y[i+1];
	}
	
	a.y =(SANPHAM*)realloc(a.y, (a.n-1)*sizeof(SANPHAM));
	a.n--;
}

void Change(PHIEU a){
	for(int i=0;i<a.n;i++){
		if(a.y[i].soLuong < 10){
			a.y[i].soLuong =10;
		}
	}
}

int main(){
	PHIEU a;
	a.input();
	a.output();
	
	cout<<endl<< "    Phieu sau sap xep la :   "<<endl;
	Sortdown(a);
	a.output();
	
	cout<<"Nhap thong tin mot san pham bat ki : "<<endl;
	SANPHAM b;
	b.input();
	Insert(a,b,1);
	cout<<"Phieu sau chen la : "<<endl;
	a.output();
	
	int viTri;
	cout<<"Nhap vi tri can xoa"<<endl; cin>>viTri;
	deleteP(a,viTri);
	cout<<"Phieu sau xoa la : "<<endl;
	a.output(); 
	
	cout<<"Phieu sau thay doi la : "<<endl;
	Change(a);
	a.output();
	
	
	

}
