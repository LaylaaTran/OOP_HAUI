#include<iostream>

using namespace std;

struct sinhVien{
	char hoTen[30];
	char gioiTinh[4];
	char hoKhau[30];
	float diemtk;
};

void input(sinhVien *a){
	cout << "Nhap ho ten "; 
	fflush(stdin);
	gets(a->hoTen);
	cout << "Nhap gioi tinh : "; fflush(stdin) ; gets(a->gioiTinh) ;
	cout << "Nhap ho khau : " ; fflush(stdin); gets(a->hoKhau);
	cout << "Nhap diem trung binh : "; cin >> a->diemtk;
}

void output(sinhVien *a){
	cout << a->hoTen << " " << a->gioiTinh << " " << a->hoKhau << " " << a->diemtk <<endl;
}
int main(){
	sinhVien *a = new sinhVien;
	input(a);
	output(a);
}

