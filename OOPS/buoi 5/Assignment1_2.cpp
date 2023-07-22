#include<bits/stdc++.h>

using namespace std;

class NGUOI{
	protected :
		char hoTen[30], ngaySinh[30], queQuan[30];
	public :
		void input();
		void output();
};

void NGUOI::input(){
	cout << "Nhap ho ten : " ; fflush(stdin); gets(hoTen);
	cout << "Nhap ngay sinh : " ; fflush(stdin); gets(ngaySinh);
	cout << "Nhap que quan : " ; fflush(stdin); gets(queQuan);
	
}

void NGUOI::output(){
	cout << "Ho ten : " << hoTen;
	cout << "\t\tNgay sinh : " << ngaySinh;
	cout << "\t\tQue quan :" << queQuan << endl;
}

class SINHVIEN : public NGUOI{
	private:
		char maSV[30];
		char nganh[30];
		int khoa;
	public :
		void input();
		void output();
};

void SINHVIEN::input(){
	cout << "Nhap Ma SV : " ; fflush(stdin); gets(maSV);
	cout << "Nhap nganh hoc : "; fflush(stdin); gets(nganh);
	cout <<"Nhap khoa hoc "; 					cin >> khoa;
	NGUOI.input();
}

void SINHVIEN::output(){
	cout << "Ma SV : " << maSV;
	cout << "\t\t Nganh hoc : "<<nganh;
	cout <<"\t\tKhoa hoc : " << khoa << endl ;
	NGUOI.output();
	
}
int main(){
	SINHVIEN a;
	a.input();
	a.output();

}
