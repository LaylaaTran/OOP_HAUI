#include<bits/stdc++.h>

using namespace std;

class PHANSO{
	private :
		int tuSo,mauSo;
	public :
		PHANSO rutGon();
		void nhap();
		void xuat();
};
//Cach dung thu 1:tro den cac thanh phan hien tai cua class hien tai 

void PHANSO::nhap(){
	cout<< " Nhap tu so : "; cin>>this->tuSo; //cin>>tuSo; 
	cout << "Nhap mau so : "; cin >> this->mauSo;
}

void PHANSO::xuat(){
	cout << this->tuSo<<"/" <<this->mauSo << endl;
}

//Cach dung thu 2 :tra ve object hien tai 

PHANSO PHANSO::rutGon(){
	int a,b;
	a=abs(this->tuSo);
	b=abs(this->mauSo);
	while(a%b!=0){
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	
	this->tuSo/=a;
	this->mauSo/=a; //gia tri cua phan so da thay doi
	
	return *this;
}
int main(){
	PHANSO x;
	x.nhap();	
	x.rutGon();
	x.xuat();
}
