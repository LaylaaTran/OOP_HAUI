#include<iostream>

using namespace std ;

struct CANBO{
	int macb;
	char hoTen[30];
	char noiSinh[30];
	int namSinh;
	float hsl;
};

void input(CANBO &a){
	cout << "Ma can bo la : " ; cin >> a.macb ;
	cout << "Ten can bo la : " ; fflush(stdin); gets(a.hoTen ) ;
	cout << "Noi sinh can bo la : " ; fflush(stdin); gets(a.noiSinh ) ;
	cout << "He so luong la : " ; cin >>a.hsl;
}

void output(CANBO a){
	cout << "Thong tin cua can bo la : " << endl;
	cout << a.hoTen << " " << a.macb << " " << a.noiSinh <<" " << a.namSinh;
	cout <<" " << a.hsl <<endl << "Luong la " << a.hsl*1000;
}

void nhapDs(CANBO *a, int n){
	for(int i = 0 ; i < n ; i++){
		cout << endl<< "--------------------------"<< endl;
		cout << "Nhap thong tin can bo thu " << i+1 << endl;
		input(a[i]);
	}
}

void xuatDs(CANBO *a, int n){
	for(int i = 0 ; i < n ; i++){
		cout <<endl<< "--------------------------"<< endl;
		cout << "Thong tin can bo thu " << i+1 << endl;
		output(a[i]);
	}
}
double tongLuong(CANBO *a, int n){
	double sum=0;
	for(int i =0 ;i<n; i++){
		sum+=1000*a[i].hsl;
		return sum;
	}
}
int main(){
	int n =3;
	CANBO *a = new CANBO[n];
	nhapDs(a,n);
	xuatDs(a,n);
	
	
	cout << "--------------"<< endl;
	cout << "Tong luong la : " << tongLuong(a,n);
}
