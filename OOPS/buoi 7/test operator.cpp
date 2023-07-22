#include<bits/stdc++.h>

using namespace std;

class Phanso{
	private:
		int tuso, mauso;
	public:
		void input();
		void output();
		Phanso();
		Phanso(int a, int b);
		Phanso operator * (Phanso &a);
		
		
};


void Phanso::input(){
	cout << "Nhap tu so :" ; cin >> this->tuso;
	cout << "Nhap mau so : "; cin >> this->mauso;
}

void Phanso::output(){
	cout << this->tuso  << "/" << mauso ;
}

Phanso::Phanso(){
	tuso = mauso = 0;
}

Phanso::Phanso(int a, int b){
	tuso = a;
	mauso = b;
}

Phanso Phanso:: operator * (Phanso &c){
	Phanso d;
	d.tuso = this->tuso * c.tuso;
	d.mauso = this->mauso * c.mauso;
	return d;
}

int main(){
	cout << "Phan so : " << endl;
	Phanso a;
	a.input();
	
	
	cout << "Phan so sau nap chong la : " << endl;
	Phanso  b(2,3), c;
	c = a * b;
	c.output();

}
