#include<bits/stdc++.h>

using namespace std;

class THUADAT{
	private:
		float cd,cr,gt;
	public :
		void input();
		void output();
		THUADAT(){}
		THUADAT(float a, float b, float c){
			cd = a ;
			cr = b;
			gt = c;
		}
		
		friend double dt(THUADAT a);
		friend bool CHECK(THUADAT a, THUADAT b);
		friend istream &operator >> (istream &a , THUADAT &b);
		friend ostream &operator <<(ostream &a, THUADAT &b);
};

double  dt(THUADAT a){
			return a.cr*a.cd;
}

bool CHECK(THUADAT a, THUADAT b){
	if(dt(a) == dt(b) && a.gt == b.gt) return true;
	else return false;
}

istream &operator >> (istream &a , THUADAT &b){
	cout << "Nhap cd : " ; a >> b.cd;
	cout << "Nhap cr : "; a >> b.cr;
	cout << "Nhap gia tien  : "  ; a >> b.gt;
	return a;
}

ostream &operator <<(ostream &a, THUADAT &b){
	a << " cd : " << b.cd << " cr : "<< b.cr << " gia tien : " <<b.gt << endl;
	return a;
}

int main(){
	cout << "-------Chua dug toan tu nhap xuat------- " << endl;
	THUADAT a(12,10, 3000), b( 12, 10, 300);
	cout << "Dien tich cua THUA DAT a la :" << dt(a) << endl;
	cout << "KQ sau check la : "  << CHECK(a,b) << endl;
	
	cout << "---------dung toan tu nhap xuar------------"<< endl;
	THUADAT c;
	THUADAT d;
	cin >> a;
	cin >> b ;
	cout <<  "Thua dat a : " <<a;
	cout << "Thua dat b : "  << b ;
	
}
