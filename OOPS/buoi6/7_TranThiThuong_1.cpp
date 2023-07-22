#include<bits/stdc++.h>

using namespace std;

class FACULTY;

class SCHOOL{
	private :
		char tenTruong[30];
		char date[30];
	public :
		friend class FACULTY;
};

class FACULTY{
	private:
		char tenKhoa[30];
		char ngay[30];
		SCHOOL x;
	public :
		void input();
		void output();
	
};

void FACULTY::input(){
	cout << " Nhap ten truong : " ; fflush(stdin); gets(x.tenTruong);
	cout << " Nhap ngay thanh lap truong : " ; fflush(stdin); gets(x.date);
	cout << "Nhap ten khoa : "; fflush(stdin); gets(tenKhoa);
	cout << "Nhap ngay thanh lap khoa : "; fflush(stdin); gets(ngay);
	
}

void FACULTY::output(){
	cout << "Ten truong la : " << x.tenTruong << endl;
	cout << "Ngay thanh lap truong : " << x.date << endl;
	cout << "Ten khoa la : " << tenKhoa << endl;
	cout << "Ngay thanh lap kkoa  : " << ngay << endl;
}

class PERSON {
	protected :
		char tenNguoi[30];
		char sinhNhat[30];
		char diaChi[30];
	public :
		void input();
		void output();
	//	PERSON();
};

//void PERSON::PERSON(){
//	strcpy(tenNguoi,"");
//	strcpy(sinhNhat,"");
//	strcpy(diaChi,"");
//}

void PERSON::input(){
	cout << "Nhap ten sinh vien : " ; fflush(stdin); gets(tenNguoi);
	cout << "Nhap sinh nhat : "; fflush(stdin); gets(sinhNhat);
	cout << "Nhap dia chi : "; fflush(stdin); gets(diaChi);
}

void PERSON::output(){
	cout << "Ten sinh vien la : " << tenNguoi << endl;
	cout << "Sinh nhat : " << sinhNhat << endl ;
	cout << "Dia chi : " << diaChi << endl;
}

class STUDENT : public PERSON{
	private :
		FACULTY y;
		char tenLop[30];
		int diem;
	public :
		void input();
		void output();
		//STUDENT();
};

//void STUDENT::STUDENT(){
//	strcpy(tenLop , \"");
//	diem = 0;
//}

void STUDENT::input(){
	PERSON::input();
	y.input();
	cout << "Nhap ten lop : " ;fflush(stdin) ; gets(tenLop) << endl;
	cout << "Nhap diem "; cin >> diem ;
}

void STUDENT::output(){
	PERSON::output();
	y.output();
	cout << "Ten lop : " << tenLop << endl;
	cout << "Diem : " << diem << endl;
}


int main(){
	STUDENT a;
	a.input();
	a.output();

}
