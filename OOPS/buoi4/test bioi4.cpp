#include<bits/stdc++.h>

using namespace std;

class PHIEU;

class HANG{
	private :	
		char tenHang[30];
		int donGia;
		int soLuong;
	public:
		HANG();
		HANG(const char *a, int b, int c);
		double thanhTien();
		void input();
		void output();
		friend class PHIEU;
		friend void Chang(PHIEU a);
		friend void Insert(PHIEU &a, int pos, HANG x);
		friend void Dlt(PHIEU &a, int pos);

};

HANG::HANG(){
	tenHang[0]='\0';
	donGia = 0;
	soLuong = 0;
}

HANG::HANG(const char *a, int b, int c){
	strcpy(tenHang, a);
	donGia = b;
	soLuong = c;
}

double HANG::thanhTien(){
		return donGia*soLuong;
}

void HANG::input(){
	cout << "Nhap ten hang : " ; fflush(stdin); gets(tenHang);
	cout << "Nhap don gia : " ; cin >> donGia;
	cout << "Nhap so luong : "; cin >> soLuong;
}

void HANG::output(){
	cout <<left << setw(25) << tenHang << setw(25) << donGia << setw(25) << soLuong << setw(25) << soLuong*donGia << endl;
}

class NGUOI{
	private:
		char tenNguoi[30];
		char soDT[30];
		char diaChi[30];
	public :
		void input();
		void output();
		friend class PHIEU;
};

void NGUOI :: input(){
	cout << "Nhap nguoi di cho : " ; fflush(stdin); gets(tenNguoi);
	cout << "Nhap so dien thoai : "; fflush(stdin); gets(soDT);
	cout << "Nhap dia chi : "; fflush(stdin); gets(diaChi);
}

void NGUOI::output(){
	cout <<setw(10) << left<< "Ho va ten nguoi di cho : " << left << tenNguoi << endl;
	cout <<setw(10) << left<< "So dien thoai : " << left << soDT << endl;
	cout <<setw(10) << left<< "Dia chi : " << left << diaChi << endl;	
}

class PHIEU{
	private:
		int n;
		char maPhieu[30];
		char ngay[30];
		NGUOI y;
		HANG *x;
	public:
		void input();
		void output();
		friend void Chang(PHIEU a);
		friend void Insert(PHIEU &a, HANG x, int pos);
		friend void Dlt(PHIEU &a, int pos);
};

void PHIEU::input(){
	cout << "Nhap ma phieu : "; fflush(stdin); gets(maPhieu);
	cout << "Nhap ngay : "; fflush(stdin); gets(ngay);
	y.input();
	
	cout << "Nhap so mat hang : "; cin >> n;

	 x= new HANG[n];
	 for(int i =0 ; i < n ; i++){
	 	x[i].input();
	 }
	
}

void PHIEU::output(){
	cout << "       ------------------" << endl  << endl;
	cout << "                PHIEU         " << endl;
	
	cout <<left << setw(15) << "Ma phieu : " << setw(15) << maPhieu << setw(25) << "Ngay" << setw(15) <<ngay << endl;
	y.output(); 
	
	cout << endl;
	
	int sum=0;
	for(int i =0 ; i < n ; i++){
		x[i].output();
		sum+=x[i].thanhTien();
	}
	
	cout <<setw(50) << right << "Cong thanh tien : " << sum << endl;
}

void Chang(PHIEU a){
	for(int i = 0 ; i < a.n ; i++){
		if(strcmp(a.x[i].tenHang, "May vi tinh") == 0){
			a.x[i].soLuong = 5 ;
		}
	}
}

void Insert(PHIEU &a, HANG y, int pos){
//	HANG *d = new HANG[a.n];
//	
//	for(int i =0 ; i < a.n; i++){
//		a.x[i] = d[i];
//	}
//	
//	delete a.x;
	
	a.x=(HANG*)realloc(a.x,(a.n+1)*sizeof(HANG));
	for(int i = a.n ; i >= pos ; i--){
		a.x[i] = a.x[i-1];
	}
	a.x[pos-1] = y;
	a.n++; 
	
	//
}

void Dlt(PHIEU &a, int pos){
	a.x= (HANG*)realloc(a.x, (a.n-1)*sizeof(HANG));
	for(int i = pos-1 ; i < a.n; i++){
		a.x[i] = a.x[i+1];
	}
	
	a.x= (HANG*)realloc(a.x, (a.n-1)*sizeof(HANG));
	
	a.n--;
}

void sort(PHIEU a){
	for(int i = 0 ; i < a.n-1; i++){
		for(int j= i+1; j < a.n; j++){
			if(a.x[i].soLuong > a.x[j].soLuong){
				swap(a.x[i], a.x[j]);
			}
		}
	}
}

int main(){
	PHIEU a;
	a.input();
	a.output();
	cout << "Phieu sau thay doi la : " << endl ;
	Chang(a);
	a.output();
	
	// 
	cout << "Phieu sau chen la : " << endl;
	HANG y("Noi com", 3 , 1000);
	Insert(a,y,1);
	a.output();
	
	cout << "Phieu sau xoa la : " << endl;
	Dlt(a,2);
	a.output();

}
