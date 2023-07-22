#include<bits/stdc++.h>

using namespace std;

class SINHVIEN{
	private :
		string maSV;
		string tenSV;
		int tuoi;
	
	public :
		void setData(string maSV, string tenSV, int tuoi)
		void output();
};

SINHVIEN::SINHVIEN(){
	maSV[0]='\0';
	tenSV[0]='\0';
	this->tuoi = 0;
}


SINHVIEN::SINHVIEN(const char* maSV,const char* tenSV, int tuoi){
	this->maSV = maSV;
	this->tenSV = tenSV;
	this->tuoi = tuoi;
}

void SINHVIEN :: output(){
	cout << "Ma sinh viem la :" << maSV <<endl;
	cout << "Ten sinh vien la : " <<tenSV <<endl;
	cout << "Tuoi la : " <<tuoi<<endl;
}
int main(){
	SINHVIEN a = SINHVIEN("2021605774", "Thuong", 18);
	a.output();

}
