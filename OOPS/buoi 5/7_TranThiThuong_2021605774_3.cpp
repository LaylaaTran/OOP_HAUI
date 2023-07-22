#include<bits/stdc++.h>

using namespace std;

class HINHBINHHANH{
	private :
		int a,b,h;
	public :
		HINHBINHHANH(int a, int b, int c){
			this->a = a;
			this -> b = b;
			this -> h = c;
		}
		
		int chuVi(){
			return 2*(a+b);
		}
		int dientich(){
			return (a*h);
		}
};

int main(){
	HINHBINHHANH a(1,2,3);
	cout << "Chu vi hinh binh hanh 1 la : " << a.chuVi() <<endl;
	cout << " Dien tich hinh binh hanh 1 la : " << a.dientich() << endl ;
	
	HINHBINHHANH b(3,4,5);
	cout << "Chu vi hinh binh hanh 2 la : " << b.chuVi() <<endl;
	cout << " Dien tich hinh binh hanh 2 la : " << b.dientich() << endl ;
	
	
	

}
