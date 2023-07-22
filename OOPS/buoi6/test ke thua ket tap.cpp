#include<bits/stdc++.h>

using namespace std;

class PHIEU;
class FACULTY;

class SCHOOL{
	private:
		char name[30];
		char date[30];
	public :
		friend class FACULTY;
		friend class STUDENT;
	
};

class FACULTY{
	private:
		char name[30];
		char date[30];
		SCHOOL x;
	public :
		void input();
		void output();
		friend class STUDENT;
};

void FACULTY::input(){
	cout << "Nhap ten truong : "; fflush(stdin); gets(x.name);
	cout << "Nhap ngay truong : "; fflush(stdin); gets(x.date);
	cout << "Nhap ten khoa : "; fflush(stdin); gets(this->name);
	cout << "Nhap ngay khoa : "; fflush(stdin); gets(this->date);
}

void FACULTY::output(){
	cout << "Ten truong la : " << x.name << endl;
	cout << "Ngay truong : " << x.date <<endl;
	cout << "Ten khoa : " << this->name << endl;
	cout << "Ngay khoa : " << this->date << endl;
	
}

class PERSON{
	protected :
		char name[30];
		char birth[30];
		char address[30];
	public :
		void input();
		void output();
		PERSON();
};

PERSON::PERSON(){
	strcpy(name,"");
	strcpy(birth,"");
	strcpy(address,"");
}

void PERSON::input(){
	cout << "Nhap ten nguoi :" ; fflush(stdin) ; gets(name);
	cout << "Nhap ngay sinh :" ; fflush(stdin) ; gets(birth);
	cout << "Nhap dia chi :" ; fflush(stdin) ; gets(address);
}

void PERSON::output(){
	cout << "Ten la : " << name << endl;
	cout << "Ngay sinh : " << birth << endl;
	cout << "Dia chi : " << address << endl;
}

class STUDENT : public PERSON{
	private:
		FACULTY y;
		char Class[30];
		float diem;
	public :
		void input();
		void output();
		STUDENT();	
};

STUDENT::STUDENT(){
	strcpy(y.name,"");
	strcpy(y.date,"");
	diem = 0;
	strcpy(y.x.name,"");
	strcpy(y.x.date,"");
}

void STUDENT::input(){
	PERSON::input();
	y.input();
	cout << "Nhap lop : " ; fflush(stdin) ; gets(Class);
	cout << "Nhap diem : "; cin >> diem;
}

void STUDENT::output(){
	PERSON::output();
	y.output();
	cout << "Lop la : " <<Class<< endl;
	cout << "Diem la : " << diem << endl;
}


int main(){
	STUDENT a;
	a.input();
	a.output();

}
