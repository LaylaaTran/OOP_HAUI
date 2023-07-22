#include<bits/stdc++.h>

using namespace std;

class TRUONGDH;

class KHOA{
	char maKhoa[30];
	char tenKhoa[30];
	char truongKhoa[30];
	friend class TRUONGDH;
};

class BAN{
	char maBan[30];
	char tenBan[30];
	char ngayTL[30];
	friend class TRUONGDH;
};

class TRUONGDH{
	private :
		KHOA *x;
		int n;
		BAN *y;
		int m;
	public:
		friend class KHOA;
		friend class BAN;
		void input();
		void output();
};

void TRUONGDH::input(){
	cout << "Nhap so luong khoa : " << endl ; cin >> n;
	x = new KHOA[n];
	for(int i=0 ; i< n; i++){
		cout << "Nhap khoa thu " << i+1 << endl;
		cout << "Nhap ma khoa : " ; fflush(stdin); gets(x[i].maKhoa) ;
		cout << "Nhap ten khoa : "; fflush(stdin ); gets(x[i].tenKhoa);
		cout << "Nhap truong khoa : "; fflush(stdin); gets(x[i].truongKhoa);
	}
	
	cout << "nhap so luong ban : " << endl; cin >> m;
	y = new BAN[m];
	for(int i=0;i<m;i++){
		cout << "Nhap ban thu " << i+1 << endl;
		cout << "Nhap ma ban : " ; fflush(stdin); gets(y[i].maBan) ;
		cout << "Nhap ten ban : "; fflush(stdin ); gets(y[i].tenBan);
		cout << "Nhap thanh thanh lap : "; fflush(stdin); gets(y[i].ngayTL);
	}
}

void TRUONGDH::output(){
	for(int i=0 ; i< n; i++){
		cout << "Khoa thu " << i+1 << endl;
		cout << "Ma khoa : " <<x[i].maKhoa << endl ;
		cout << "Ten khoa : " << x[i].tenKhoa << endl;
		cout << "Tuong khoa : " << x[i].truongKhoa << endl;
	}
	
		for(int i=0;i<m;i++){
		cout << "Ban thu " << i+1 << endl;
		cout << "Ma ban : "  <<y[i].maBan <<endl ;
		cout << "Ten ban : " << y[i].tenBan << endl;
		cout << "Nhap thanh thanh lap : " <<y[i].ngayTL << endl;
	}
}

class TRUONG : public TRUONGDH{
	private :
		char maTruong[30];
		char tenTruong[30];
		char diaChi[30];
	
	public :
		void input();
		void output();
};

void TRUONG::input(){
	cout << "Nhap ma truong : " ; fflush(stdin); gets(maTruong) ;
	cout << "Nhap ten truong : "; fflush(stdin ); gets(tenTruong);
	cout << "Nhap dia chi truong : "; fflush(stdin); gets(diaChi);
	TRUONGDH::input();
}

void TRUONG::output(){
	cout << "Ma truong : " <<maTruong << endl ;
	cout << "Ten truong : " << tenTruong << endl;
	cout << "Dia chi : " << diaChi << endl;
	TRUONGDH::output();
}

int main(){
	TRUONG A;
	A.input();
	A.output();
}
