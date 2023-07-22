#include<bits/stdc++.h>

using namespace std;

struct PHIEU;

int n;

struct MON{
	char tenMon[30];
	int soTrinh;
	float diem;
	float diemtb;
};

void input(MON 	&a){
		cout << "Nhap ten mon : " ; fflush(stdin); gets(a.tenMon);
		cout << "Nhap so trinh : "; cin >> a.soTrinh ;
		cout << "Nhap diem : " ; cin >> a.diem;
}

void output(MON a){
	
	cout << left << setw(15) <<  a.tenMon << setw(15) << a.soTrinh <<setw(15) << a.diem << endl;

}

void inputMon(MON *&a, int &n){
	int sum =0 ;
	cout << "Nhap so luong mon hoc la : " ; cin >> n;
	a = new MON[n];
	for(int i = 0 ; i < n ; i++){
		input(a[i]);
		sum+=a[i].diem;
	}
	a->diemtb = (float)sum/n;
}

void outputMon(MON *a,int n){
	for(int i = 0 ; i < n ; i++){
		output(a[i]);
	}
	cout << "Diem trung binh " << right << setw(15) << a->diemtb << endl;
}

struct PHIEU{
	char maSV[30];
	char tenSV[30];
	char lop[30];
	int khoa;
	
};

void inPUT(PHIEU &b){
	cout << "Nhap ma sinh vien : "; fflush(stdin ); gets(b.maSV);
	cout << "Nhap ten sinh vien : "; fflush(stdin ); gets(b.tenSV);
	cout << "Nhap lop : "; fflush(stdin ); gets(b.lop);
	cout << "Nhap khoa : "; cin >> b.khoa ;
}

void outPUT(PHIEU b){
	cout << endl << endl << "----------------PHIEU BAO DIEM -----------------"<< endl;
	cout << left << setw(15) << "Ma sinh vien : "  << setw(10) << b.maSV << right << setw(15) <<"Ten sinh vien : "  << setw(10) << b.tenSV << endl;
	cout << left << setw(15) << "Lop: " << setw(10) << b.lop << right << setw(15) <<"Khoa : " << right << setw(10) << b.khoa << endl;
	cout << "Bang diem : " << endl;
	cout << left << setw(15) <<  "TEN MON" << setw(15) << "SO TRINH" <<setw(15) << "DIEM" << endl;
	
	
}

int main(){
	PHIEU b;
	MON *a;
	inPUT(b);
	inputMon(a,n);
	outPUT(b);
	outputMon(a,n);
	

}
