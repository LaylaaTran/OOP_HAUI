#include<bits/stdc++.h>

using namespace std;

class TRUONGDH;

class KHOA{
	private :
		char maKhoa[30];
		char tenKhoa[30];
		char truongKhoa[30];
	public :
		friend class TRUONGDH;
};

class BAN{
	private:
		char maBan[30];
		char tenBan[30];
		char ngayTL[30];
	public :
		friend class TRUONGDH;
};

class TRUONG{
	protected:
		char maTruong[30];
		char tenTruong[30];
		char diaChi[30];
	public :
		void input();
		void output();
};

void TRUONG::input(){
	cout << "Nhap ma truong la : "; fflush(stdin); gets(maTruong);
	cout << "Nhap ten truong  la :"; fflush(stdin); gets(tenTruong);
	cout << "Nhap dia chi la :"; fflush(stdin); gets(diaChi);
}

void TRUONG::output(){
	cout << "Ma truong la : " << maTruong << endl ;
	cout << "Ten truong la : " << tenTruong << endl;
	cout << "Dia chi la : " << diaChi << endl;
}

class TRUONGDH : public TRUONG{
	private:
		KHOA *x;
		int n;
		BAN *y;
		int m;
	public:
		void input();
		void output();
};

void TRUONGDH::input(){
	TRUONG::input();
	cout << "Nhap so khoa la : "; cin >> n;
	x = new KHOA[n];
	for(int i = 0 ; i <n ; i++){
		cout << "Nhap ma khoa : "; fflush(stdin); gets(x[i].maKhoa);
		cout << "Nhap ten khoa : "; fflush(stdin); gets(x[i].tenKhoa);
		cout << "Nhap truong khoa : "; fflush(stdin); gets(x[i].truongKhoa);
	}
	
	cout << "Nhap so luong ban : "; cin >> m;
	y = new BAN[m];
	for(int i = 0 ; i < m ; i++){
		cout << "Nhap ma ban : " ; fflush(stdin); gets(y[i].maBan);
		cout << "Nhap ten ban : " ; fflush(stdin); gets(y[i].tenBan);
		cout << "Nhap ngay thanh lap :" ; fflush(stdin); gets(y[i].ngayTL);
}
}

void TRUONGDH::output(){
	TRUONG::output();
	for(int i = 0 ; i < n ; i++){
		cout << "Ma khoa la : " << x[i].maKhoa << endl;
		cout << "Ten khoa la : " << x[i].tenKhoa << endl;
		cout << "Truong khoa la : " << x[i].truongKhoa << endl;
	}
	
	for(int i = 0 ; i < m ; i++){
		cout << "Ma ban la : " << y[i].maBan <<endl;
		cout << "Ten ban la : " << y[i].tenBan << endl ;
		cout << "Ngay thanh lap la : " << y[i].ngayTL << endl;
	}
	
}

int main(){
	TRUONGDH a;
	a.input();
	a.output();

}
