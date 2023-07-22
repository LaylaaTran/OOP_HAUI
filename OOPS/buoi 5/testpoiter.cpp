#include<bits/stdc++.h>

using namespace std;

class testPointer{
	private :
		int a,b;
	public :
		testPointer(int a , int b){
			this->a = a;
			this -> b = b;
		}
		
		testPointer & seta(int x){
			a = x ;
			return *this;
		}
		testPointer & setb(int y){
			b = y;
			return *this;
		}
		void output();
};

 void testPointer :: output(){
	cout << "a = " << this -> a <<endl;
	cout << "b = " << this -> b <<endl;
	
}

int main(){
	cout << " Thong tin doi tuong p " << endl;
	testPointer p(2,4);
	p.output();
	
	cout << "Thong tin doi tuong p sau khi thiet lap gia tri  a : " << endl;
	p.seta(10);
	p.output();
	
	cout << "Thong tin doi tuong p sau khi thiet lap gia tri : " << endl;

	p.setb(20);
	p.output();

}
