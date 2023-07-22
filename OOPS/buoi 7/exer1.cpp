#include<bits/stdc++.h>

using namespace std;

class phanSo{
	private :
		int tuSo;
		int mauSo;
	public :
//		friend istream &operator >> (istream &in , phanSo &a);
//		friend  ostream &operator<<(ostream &out, phanSo a);
	void input();
		phanSo(){}
		//phep nhan
		phanSo(int a, int b){
			tuSo = a, mauSo = b;
		}	
			
		phanSo operator * (phanSo &obj){
			phanSo a;
			a.tuSo =  this->tuSo*obj.tuSo; 
			a.mauSo = this ->mauSo*obj.mauSo;
			return a;
		}
		
		phanSo operator / (phanSo &b){
			phanSo c;
			c.tuSo = this -> tuSo * b.mauSo ;
			c.mauSo = this ->mauSo * b.tuSo ;
			return c;
		}
		
		phanSo operator + (phanSo &b){
			phanSo c;
			c.tuSo = this->tuSo*b.mauSo + this->mauSo*b.tuSo;
			c.mauSo = this->mauSo* b.mauSo ;
			return c;
		}
		
		void output(){
			cout << tuSo << "/" << mauSo << endl;
		}
		
};



// hai ten kieu du lieu minh dung ostream : out stream cho dau ra ,  istream  : cho viec nhap

//istream &operator >> (istream &in, phanSo &a){
//	cout << "Nhap tu so : " ;
//	in >> a.tuSo ;
//	cout << "Nhap mau so : " ;
//	in >> a.mauSo;
//	return in;
//}
//
//ostream &operator<<(ostream &out, phanSo a){
//	out << a.tuSo << "/" << a.mauSo << endl;
//	return out;
//}



int main(){
	phanSo a(2,3) , b(5 , 3) , c;
//	phep nhan
	 c = a*obj ;
	 c.output();
	 
	 // phep chia
	  
	c =a/b;
	c.output();

//phep cong

	c = a + b ;
	c.output();

//	phanSo a;
//	cin >> a;
//	cout << a ;
//	phanSo b;
//	cin >> b;
//	cout << b;
//	phanSo c;
//	c = a + b;
//	cout << "Phan so la : " << c;
//	

}
