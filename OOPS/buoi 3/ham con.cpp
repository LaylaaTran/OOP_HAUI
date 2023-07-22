#include<bits/stdc++.h>

using namespace std;

class Person{
	private :
		char ten[30];
		int tuoi;
	public :
		void Nhap();
		void Xuat();
};

void Person::Nhap(){
	cout<<"Nhap ten : "; fflush(stdin); gets(ten);
	cout<<"Nhap tuoi : "; cin>>tuoi;
}

void Person::Xuat(){
	cout<<"Ten sinh vien la : "<<ten<<endl;
	cout<<"Tuoi sinh vien la : "<<tuoi <<endl;
}

class sinhVien{
	private :
		int maSV;
		char tenLop[20];
		friend class Person;
	public :
		Person d;
		void Nhap();
		void Xuat();
};

void sinhVien::Nhap(){
	cout<<"Nhap ma sinh vien : " ; cin>>maSV;
	cout<<"Nhap ten lop :" ; fflush(stdin); gets(tenLop);
	d.Nhap();
}
void sinhVien::Xuat(){
	cout<<"Ma sinh vien la : " <<maSV<<endl;
	cout<<"Lop sinh vien la : " <<tenLop<<endl;
	d.Xuat();
}

int main(){
	sinhVien a;
	a.Nhap();
	a.Xuat();

}
