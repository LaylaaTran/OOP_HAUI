#include<bits/stdc++.h>

using namespace std;

struct CANBO{	
	char maCanBo[30];
	char hoTen[30];
	int namSinh;
	char noiSinh[30];
	float heSoLuong;
};

void input(CANBO *cb){
	cout << "Nhap Ma can bo : " ; fflush(stdin); gets(cb->maCanBo);
	cout << "Nhap Ho ten : " ; fflush(stdin); gets(cb->hoTen);
	cout << "Nhap nam sinh : " ; cin >> cb->namSinh;
	cout << "Nhap noi sinh : " ; fflush(stdin); gets(cb->noiSinh);
	cout << "Nhap he so luong : "; cin>>cb->heSoLuong;
}

float luong(CANBO *cb){
	return cb->heSoLuong*1150000;
}

void output(CANBO *cb){
	cout << "Ma can bo : " << cb->maCanBo << endl; 
	cout << "Ho ten : " << cb->hoTen << endl;
	cout << "Nam sinh : " << cb->namSinh << endl;
	cout << "Noi sinh : " << cb->noiSinh << endl;
	cout << "He so luong : " << cb->heSoLuong <<endl;
	cout << "Luong : " << luong(cb);
}


int main(){
	CANBO *a;
	input(a);
	output(a);

}
