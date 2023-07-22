#include<bits/stdc++.h>

using namespace std;

class sinhVien{
	private :
		int maSV;
		char tenSV[30];
		char tenLop[20];
	public :
		sinhVien();
		sinhVien(int a,const char b[],const char c[]);
		
		void Xuat();
};

sinhVien::sinhVien(){
	maSV=0;
	tenSV[0]='\0';
	tenLop[0]='\0';
}

sinhVien::sinhVien(int a, const char b[],const char c[]){
	maSV= a;
	strcpy(tenSV,b);
	strcpy(tenLop,c);
}

void sinhVien::Xuat(){
	cout<<"Ma sinh vien la : "<<maSV<<endl;
	cout<<"Ten sinh vien la "<<tenSV<<endl;
	cout<<"Lop sinh vien la :"<<tenLop;
}

int main(){
	sinhVien a(2021605774, "Tran Thi Thuong", "HTTT02");
	a.Xuat();
}
