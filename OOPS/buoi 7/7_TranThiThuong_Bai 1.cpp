#include<bits/stdc++.h>

using namespace std;

class HANG{
	private:
		float trongLuong;
		float giaTien;
		float theTich;
	public :
		void input();
		void output();
		HANG(){}
		HANG(float a, float b, float c){ 
			trongLuong = a;
			giaTien = b;
			theTich = c;
		}
		
		HANG operator + (HANG &a);
		friend bool CHECK(HANG a, HANG b);
		friend  istream &operator >>(istream &a, HANG &b);
		friend 	ostream &operator << (ostream &a, HANG &b);
		
		
};

void HANG::input(){
	cout << "Nhap trong luong : " ; cin>> trongLuong ;
	cout << "Nhap gia tien : " ; cin >> giaTien;
	cout << "Nhap the tich : "; cin >> theTich ;
}

void HANG::output(){
	cout << "Trong luong la : "  << trongLuong << endl;
	cout << "Gia tien la : " << giaTien << endl;
	cout << "The tich la : " << theTich << endl;
}

HANG HANG :: operator+(HANG &a){
	HANG b;
	b.trongLuong = this->trongLuong + a.trongLuong;
	b.giaTien = this->giaTien+ a.giaTien ;
	b.theTich = this->theTich + a.theTich;
	return b;
}

bool CHECK(HANG a, HANG b){
	if(a.trongLuong == b.trongLuong && a.giaTien == b.giaTien && a.theTich == b.theTich)
		return true ;
	else return false;
}

istream &operator >>(istream &a, HANG &b){
	cout << " Nhap trong luong :" ; a >> b.trongLuong;
	cout << "Nhap gia tien : " ; a>>b.giaTien ;
	cout << "Nhap the tich : "; a >>b.theTich;
	return a;
}

ostream &operator << (ostream &a, HANG &b){
	a << " Trong luong : "  << b.trongLuong << endl;
	a <<"Gia tien : " << b.giaTien << endl;
	a << "The tich : " << b.theTich << endl;
	return a;
}

int main(){
	HANG a;
	a.input();
	cout << "Phan so sau nap chong la : " ;
	HANG b(10,1000,2) , c;
	c = a+b;
	c.output();
	
	cout << CHECK(a,b) << endl;
	
	
	HANG a, b, c;
	cin >> a;
	cout << a;
	cin >> b;
	cout << b;
	c = a + b;
	cout << "Phan so sau dung toan tu nhap xuat la : "<< endl;
}
