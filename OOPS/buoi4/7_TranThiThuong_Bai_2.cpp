#include<bits/stdc++.h>

using namespace std;

class PHIEU;

class HANG{
	private:
		char tenHang[30];
		int donGia;
		int soLuong;
	public:
		double thanhTien();
		friend class PHIEU;
		friend void Sort(PHIEU a);
		friend void findInfor(PHIEU a);
		friend void deleteNho(PHIEU &a, HANG x, int pos);
		friend void delNum(PHIEU &a, HANG x);
		void input();
		void output();
};

double HANG::thanhTien(){
	return donGia*soLuong;
}

void HANG::input(){
	cout<<"Nhap ten hang la :" ; fflush(stdin); gets(tenHang);
	cout<<" Nhap don gia la : "; cin>>donGia;
	cout<<"Nhap so luong la : "; cin>>soLuong;
}

void HANG::output(){
	cout<<left<<setw(25)<<tenHang<<setw(25)<<donGia<<setw(25)<<soLuong<<setw(25)<<donGia*soLuong<<endl;
}

class NGUOI{
	private:
		char tenNguoi[30];
		char soDT[30];
		char diaChi[30];
	public:
		void input();
		void output();
};

void NGUOI::input(){
	cout<<"Nhap ten nguoi : "; fflush(stdin); gets(tenNguoi);
	cout<<"Nhap so dien thoai : "; fflush(stdin); gets(soDT);
	cout<<"Nhap dia chi : "; fflush(stdin); gets(diaChi);
}

void NGUOI::output(){
	cout<<"Ho va ten nguoi di cho : "<<tenNguoi <<endl;
	cout<<"So dien thoai : "<<soDT<<endl;
	cout<<"Dia chi : "<<diaChi<<endl;
}

class PHIEU{
	private:
		int n;
		char maPhieu[30];
		char ngay[30];
		NGUOI x;
		HANG *y;
	public:
		friend void Sort(PHIEU a);
		friend void findInfor(PHIEU a);
		friend void deleteNho(PHIEU &a, HANG x, int pos);
		friend void delNum(PHIEU &a, HANG x);
		void input();
		void output();
};

void PHIEU::input(){
	cout<<"Nhap so luong hang la : "; cin>> n;
	cout<<"Nhap ma phieu : "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay : "; fflush(stdin); gets(ngay);
	x.input();
	y= new HANG[n];
	for(int i=0;i<n;i++){
		y[i].input();
	}
}

void PHIEU::output(){
	cout<<"\t\t\t PHIEU DI CHO "<<endl;
	cout<<left<<"Ma phieu : "<<setw(25)<<maPhieu<<"Ngay : "<<setw(25)<<ngay<<endl;
	x.output();
	int sum=0;
	cout<<left<<setw(25)<<"Ten Hang "<<setw(25)<<"Don Gia"<<setw(25)<<"So luong"<<setw(25)<<"Thanh tien "<<endl;
	for(int i=0;i<n;i++){
		y[i].output();
		sum+=y[i].thanhTien();
	}
	
	cout<<left<<setw(50)<<"Cong thanh tien "<<setw(25)<<sum<<endl;
}

void Sort(PHIEU a){
	for(int i=0;i<a.n-1;i++){
		for(int j=i+1; j < a.n;j++){
			if(a.y[i].thanhTien() > a.y[j].thanhTien()){
				swap(a.y[i], a.y[j]);
			}
		}
	}
}

void findInfor(PHIEU a){
	int count=0;
	for(int i=0;i<a.n;i++){
		if(strcmp(a.y[i].tenHang, "Rau" )== 0){
				a.y[i].output();
				break;
				count=1;
		}
	}
	
	if(count==1) cout<<endl<<"Khong co thong tin can tim !"<<endl;
	
}

void deleteNho(PHIEU &a, HANG x, int pos){
	for(int i=pos;i< a.n-1; i++){
		a.y[i]= a.y[i+1];
	}
	
	a.y= (HANG*)realloc(a.y, (a.n-1)*sizeof(HANG));
	a.n--;
}

void delNum(PHIEU &a, HANG x){
	for(int i=0;i< a.n-1 ;i++){
		if(a.y[i].soLuong < 5){
			deleteNho(a,x,i);
			i--;
		}
	}
}

int main(){
	PHIEU a;
	a.input();
	a.output();
	
	cout<<"Phieu sau sap xep theo thanh tien la : "<<endl;
	Sort(a);
	a.output();

	cout<<" Phieu sau tim kiem : "<<endl;
	findInfor(a);
	
	cout<<"Phieu sau xoa la : ";
	HANG x;
	delNum(a,x);
	a.output();
	

}
