#include<bits/stdc++.h>

using namespace std;

class SCHOOL{
	private :
		char name[30];
		int date;
	public :
		friend class FACULTY;
};


class FACULTY{
	private:
		char nameFaculty[30];
		int dateFaculty;
		SCHOOL x;
	public:
		void input();
		void output();
};

void FACULTY::input(){
	cout<<"\n Nhap ten truong : "; fflush(stdin); gets(x.name);
	cout<<"Nhap ngay thanh lap truong : "; cin>>x.date;
	cout<<"Nhap ten khoa :"; fflush(stdin); gets(nameFaculty);
	cout<<"Nhap ngay thanh lap khoa : "; cin>>dateFaculty;
}

void FACULTY::output(){
	cout<<"Nhap ten truong : "<<x.name<<endl;
	cout<<"Nhap ngay thanh lap truong " <<x.date<<endl;
	cout<<"Ten khoa la : "<<nameFaculty<<endl;
	cout<<"Ngay thanh lap khoa la : "<<dateFaculty<<endl;
}

class STUDENT{
	private:
		FACULTY y;
		char Class[30];
		int Score ;
	public :
		void input();
		void output();
	//	STUDENT();
	
};

void STUDENT::input(){
	y.input();
	cout<<"Nhap ten lop :"; fflush(stdin); gets(Class);
	cout<<"Nhap diem : " ; cin>>Score;
}

void STUDENT::output(){
	y.output();
	cout<<"Ten lop la : "<<Class<<endl;
	cout<<"Diem la :"<<Score;
}



int main(){
	int n;
	cin>>n;
	
	
	
	cout<<"Nhap so luong sinh vien : "; cin>>n;
	for(int i=0;i<n;i++){
		STUDENT a;
		a.input();
		a.output();
	}

}
