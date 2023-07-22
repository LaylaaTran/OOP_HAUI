#include<iostream>

using namespace std;

struct NGAYTHANG{
	int ngay, thang, nam;
}; 

struct HOCSINH{
	char hoten[30], gioitinh[4], hokhau[20];
	float diemtb;
	NGAYTHANG x;
};

int main(){
	HOCSINH a = {"Thuong", "nu","Ha noi", 10.0 ,{10, 10, 2003}};
	cout << a.hoten << endl;
	cout << a.gioitinh << endl;
	cout << a.hokhau << endl ;
	cout << a.x.ngay << "/" << a.x.thang << "/" << a.x.nam << endl;
}
