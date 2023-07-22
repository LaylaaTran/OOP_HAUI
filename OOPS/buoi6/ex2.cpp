#include<bits/stdc++.h>

using namespace std;
class LOPHOC;

class NGUOI{
	protected :
		char hoTen[30];
		char ngaySinh[30];
		char queQuan[30];
	public :
		friend void kiemTra(LOPHOC a);
		friend void sapXep(LOPHOC a);
		void input();
		void output();
};

void NGUOI::input(){
	cout << "Nhap ten la : " ; fflush(stdin); gets(hoTen);
	cout << "Nhap ngay sinh : "; fflush(stdin); gets(ngaySinh);
	cout << "Nhap que quan : "; fflush(stdin ); gets(queQuan);
}

void NGUOI :: output(){
	cout << "Ten la : " << hoTen << endl;
	cout << "Ngay sinh la : " << ngaySinh << endl;
	cout << "Que quan la : " << queQuan <<endl;
}
class SINHVIEN : public NGUOI{
	private :
		char maSV[30];
		char nganh[30];
		int khoaHoc;
	public :
		friend class LOPHOC;
		friend void kiemTra(LOPHOC a);
		friend void sapXep(LOPHOC a);
		void input();
		void output();
};

void SINHVIEN::input(){
	NGUOI::input();
	cout << "Nhap ma sinh vien la : " ; fflush(stdin ); gets(maSV);
	cout << "Nhap nganh hoc la : " ; fflush(stdin ); gets(nganh);
	cout << "Nhap khoa hoc la : " ; cin>>khoaHoc ;
}

void SINHVIEN :: output(){
	NGUOI::output();
	cout << "Ma sv :" <<maSV <<endl;
	cout << "Nganh hoc : " <<nganh <<endl;
	cout << "Khoa hoc : " <<khoaHoc <<endl;
}

class LOPHOC{
	private :
		char maLH[30];
		char tenLH[30];
		char ngayMo[30];
		SINHVIEN *x;
		int n;
		char giaoVien[30];
	public:
		friend void kiemTra(LOPHOC a);
		friend void sapXep(LOPHOC a);
		void input();
		void output();
};

void LOPHOC::input(){
	cout << "Nhap so luong sinh vien : " ; cin >>n;
	cout << " Nhap ma lop hoc la " ; fflush(stdin); gets(maLH);
	cout << "Nhap ten lop hoc la " ; fflush(stdin); gets(tenLH);
	cout << "Nhap ngay mo la " ; fflush(stdin); gets(ngayMo);
	x = new SINHVIEN[n];
	for(int i=0;i<n;i++){
		x[i].input();
	}
	
	cout << "Nhap ten giao vien la : " ; fflush(stdin); gets(giaoVien);
}

void LOPHOC::output(){
	cout << "Ma lop la : " <<maLH << endl;
	cout << "Ten lop la : " <<tenLH <<endl;
	cout << "Ngay mo la : " <<ngayMo <<endl;
	for(int i=0 ;i<n;i++){
		x[i].output();
	}
	
	cout << "Giao vien la : " << giaoVien <<endl;
}


void kiemTra(LOPHOC a){
	int dem=0;
	for(int i=0;i< a.n;i++){
		if(a.x[i].khoaHoc == 11 ){
			dem++;
		}
	}
	
	if(dem==0) cout << "Khong co sinh vien nao khoa 11";
	else cout << "So sinh vien khoa 11 la " <<dem <<endl;
}

void sapXep(LOPHOC a){
	for(int i=0;i<a.n-1;i++){
		for(int j=0;j < a.n; j++){
			if(a.x[i].khoaHoc > a.x[i].khoaHoc){
			swap(a.x[i], a.x[i]);
			}
		}
	}
}

int main(){
	LOPHOC a;
	a.input();

	kiemTra(a);
		a.output();
	
}
