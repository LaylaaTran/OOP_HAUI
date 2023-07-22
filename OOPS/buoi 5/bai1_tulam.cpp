#include<bits/stdc++.h>

using namespace std;

class PERSON{
	protected :
		char hoTen[30];
		char ngaySinh[30];
		char queQuan[30];
};

class KYSU : public PERSON{
		char nganh[30];
		int namTN;
	public : 
		void input();
		void output();
		friend void timKySu(KYSU *a, int n);
};

void KYSU::input(){
	cout << " Nhap ten la : "; fflush(stdin); gets(hoTen);
	cout << " Nhap ngay sinh la : " ; fflush(stdin); gets(ngaySinh);
	cout << "Nhap que quan la :" ; fflush(stdin) ; gets(queQuan);
	cout << "Nhap chyuen nganh la : "; fflush(stdin); gets(nganh);
	cout << " Nhap nam tot nghiep : "; cin>>namTN;
}

void KYSU::output(){
	cout <<" Ten la :"<< hoTen <<endl;
	cout << " Ngay sinh la : " <<ngaySinh<<endl;
	cout << "Que quan la : " <<queQuan << endl;
	cout << " Nganh la : " << nganh << endl;
	cout << " Nam tot nghiep : "<< namTN << endl;
}

void timKySu( KYSU *a, int n){
	
	int Max=0;
	
	for(int i=0 ; i < n ; i++){
		if(a[i].namTN > Max ) Max = a[i].namTN;
	}
	
	for( int i=0 ; i < n ; i++){
		if(a[i].namTN == Max ){
			a[i].output();
		}
	}
	
	
}

int main(){
	
	KYSU *a;
	int n;
	cout << "Nhap n= "; cin >> n;
	a = new KYSU[n];
	for(int i = 0 ; i < n ; i++){
		cout << " Nhap ky su thu : "<<i+1 << " la : " << endl;
		a[i].input();
	}
	
	for(int i = 0 ; i < n ; i++ ){
		cout << "Ky su thu : " << i+1 <<endl ;
		a[i].output();
	}
	
	cout << "Sau khi tim sinh vien tot nghiep la : ";
	timKySu(a,n);
}
