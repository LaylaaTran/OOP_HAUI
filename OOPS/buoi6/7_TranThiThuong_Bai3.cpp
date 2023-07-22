#include<bits/stdc++.h>

using namespace std;

class BENHNHAN;

class NGUOI {
	protected :
		char hoTen[30];
		int tuoi ;
	public : 
		friend void timBn(NGUOI a,BENHNHAN b);
		friend void suaTT(NGUOI a);
		void input();
		void output();
};

void NGUOI::input(){

		cout << "Ho ten la : "; fflush(stdin); gets(hoTen);
		cout << "Tuoi la : " ; cin>> tuoi ;
	

}

void NGUOI::output(){
	cout <<"Ho ten la : "<< endl;
	cout << "Tuoi la : " << tuoi << endl;
	
}

class BENHVIEN{
	private : 
		char tenBV[30];
		char diaChi[30];
		NGUOI giamDoc;
	public :
		friend class BENHNHAN;
		friend void timBn(BENHNHAN a);
		friend void suaTT(NGUOI a);
};



class BENHNHAN : public NGUOI{
	private :
		char ma[30];
		char tienSu[30];
		char chuanDoan[30];
		BENHVIEN x;
	public :
		friend void timBn(BENHNHAN a);
		friend void suaTT(NGUOI a);
		void input();
		void output();
};

void BENHNHAN::input(){
		cout << "Nhap ma benh nhan : " ; fflush(stdin); gets(ma);
		NGUOI::input();
		cout << "Nhap tien su benh  : " ; fflush(stdin); gets(tienSu);
		cout << "Nhap chuan doan : " ; fflush(stdin); gets(chuanDoan);
		cout << "Nhap ten benh vien : " ; fflush(stdin); gets(x.tenBV);
		cout << "Nhap dia chi : " ; fflush(stdin); gets(x.diaChi);
		cout << "Nhap giam doc : " ;  // luc nay nhap nguoi the nao anhh ???
}

void BENHNHAN::output(){
		cout << "Ma benh nhan la : " << ma << endl;
		NGUOI::output();
		cout << "Tien su benh la : " << tienSu << endl;
		cout << "Chuan doan benh : "  << chuanDoan << endl;
		cout << "Ten benh vien : " << x.tenBV <<endl;
		cout << "Dia chi : " << x.diaChi << endl ;
		cout << "Giam doc : " << x.giamDoc << endl;
	
}


void timBn( BENHNHAN a){
	int count=0;
	for(int i=0 ; i < a.n ; i++){
		if(a[i].tuoi < 30){
			count++;
		}
	}
	
	cout << "Trong danh sach vua nhap co " << count << " nguoi lon hon 30"<< endl;
}

//void suaTT(NGUOI a){
//	for(int i=0;i<a.n;i++){
//		if(strcmp(a[i].ma, "BN01")==true){
//			a[i].tuoi = 20 ;
//		}
//	}
//}

int main(){
	int n;
	cout << "Nhap so luong benh nhan la : " << endl; cin >> n ;
	BENHNHAN *a;
	a = new BENHNHAN[n];
	for(int i =0;i<n;i++){
		a.input();
	}
	
	for(int i=0;i<n;i++){
		a.output();
	}

//
//	timBn(a);
//	suaTT(a);
//	a.output();

}
