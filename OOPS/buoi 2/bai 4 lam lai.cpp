#include <bits/stdc++.h>

using namespace std;

class PHIEU;

class TAISAN
{
private:
    char tenTaiSan[30];
    int soLuong;
    char tinhTrang[30];

public:
	TAISAN();
	TAISAN(const char *tenTS, int sL, const char* tT);
	friend class PHIEU;
    friend void ChangeTaisan(PHIEU a);
    friend void InsertTaiSan(PHIEU &a, TAISAN x, int pos);
    friend void deleteTanSan(PHIEU &a, int pos);
    friend void Sort(PHIEU &a );
    void input();
    void output();
};

void TAISAN::input()
{
    cout << "Nhap ten tai san la :";
    fflush(stdin);
    gets(tenTaiSan);
    cout << "Nhap so luong la :";
    cin >> soLuong;
    cout << "Nhap tinh trang tai san la : ";
    fflush(stdin);
    gets(tinhTrang);
}

void TAISAN::output()
{
    cout << setw(20) << left << tenTaiSan << setw(20) << left << soLuong << setw(20) << left << tinhTrang<<endl;
}

TAISAN::TAISAN(){
	tenTaiSan[0]='\0';
	soLuong=0;
	tinhTrang[0]='\0';
}

TAISAN::TAISAN(const char *tenTS, int sL, const char* tT){
	strcpy(tenTaiSan, tenTS);
	soLuong=sL;
	strcpy(tinhTrang, tT);
}

class PHONGKIEMKE
{
private:
    char tenNhanVien[30];
    char chucVu[30];
    char tenPhong[30];
    char maPhong[30];
    char truongPhong[30];

public:
    friend class PHIEU;
    void input();
    void output();
};

void PHONGKIEMKE::input()
{
    cout << "Nhap ten nhan vien : ";
    fflush(stdin);
    gets(tenNhanVien);
    cout << "Nhap chuc vu : ";
    fflush(stdin);
    gets(chucVu);
    cout << "Nhap ten phong : ";
    fflush(stdin);
    gets(tenPhong);
    cout << "Nhap ma phong : ";
    fflush(stdin);
    gets(maPhong);
    cout << "Nhap ten truong phong : ";
    fflush(stdin);
    gets(truongPhong);
}

void PHONGKIEMKE::output()
{
	
	cout << left<< setw(20) <<"Nhan vien kiem ke : "<<tenNhanVien <<"\t"<<setw(20)<<left<<"Chuc vu : "<<chucVu<<endl;
	cout << left<< setw(20) <<"Kiem ke tai phong : "<<tenPhong<<"\t"<<setw(20)<<left<<"Ma phong : "<<maPhong<<endl;

    cout <<left << setw(20)<<"Truong phong : " << truongPhong << endl;
}

class PHIEU
{
private:
    int n;
    char maPhieu[30];
    char ngayKiemKe[30];
    PHONGKIEMKE x;
    TAISAN *y;

public:
	friend class TAISAN;
	friend void ChangeTaisan(PHIEU a);
	friend void InsertTaiSan(PHIEU &a, TAISAN x, int pos);
	friend void deleteTanSan(PHIEU &a, int pos);
	friend void Sort(PHIEU &a);
    void input();
    void output();
};

void PHIEU::input()
{
    cout << "Nhap so tai san la :";
    cin >> n;
    cout << "Nhap ma phieu la : ";
    fflush(stdin);
    gets(maPhieu);
    cout << "Nhap ngay kiem tra : ";
    fflush(stdin);
    gets(ngayKiemKe);
    x.input();
    y = new TAISAN[n];
    for (int i = 0; i < n; i++)
    {
        y[i].input();
    }
}

void PHIEU::output()
{
    cout << "\n\t\t\t\tPHIEU KIEM KE TAI SAN " << endl;
    
    x.output();

    int tongSL = 0;

    cout << left << setw(20) << " Ten tai san" << left  << setw(20) << " So luong" << left<< setw(20) << " Tinh trang"<<endl;

    for (int i = 0; i < n; i++)
    {
        y[i].output();
        tongSL += y[i].soLuong;
    }

    cout << right << " So tai san da kiem ke : " << n << setw(25) << "Tong so luong : " << tongSL;
    
}

//Sua thong tin so luong tai san 


void ChangeTaisan(PHIEU a){
	for(int i=0;i<a.n;i++){
		if(strcmp(a.y[i].tenTaiSan , "May vi tinh" )==0){
			a.y[i].soLuong =20;
		}
	}
}

void InsertTaiSan(PHIEU &a, TAISAN x, int pos){
	a.y=(TAISAN*)realloc(a.y,(a.n+1)*sizeof(TAISAN));
	
	for(int i=a.n;i>=pos;i--){
		a.y[i] = a.y[i-1];
	}
	
	a.y[pos-1]= x;
	a.n++;
	
}

void deleteTanSan(PHIEU &a, int pos){
	for(int i=pos-1;i<a.n-1; i++ ){
		a.y[i]=a.y[i+1];
	}
	
	a.y=(TAISAN*)realloc(a.y, (a.n-1)*sizeof(TAISAN));
	a.n--;
}

void Sort(PHIEU &a){
	for(int i = 0 ;i<a.n-1 ;i++ ){
		for(int j=i+1;j< a.n; j++){
			if(a.y[i].soLuong > a.y[j].soLuong){
				swap(a.y[i] , a.y[j]);
			}
		}
		
	}
}

int main()
{

    PHIEU a;
    a.input();
    a.output();
    
    //Thay doi kieu trong tai san
    ChangeTaisan(a);
    a.output();
    
    //chen them vao tai san
//    cout<<endl<<"Nhap thanh phan tai san muon chen : "<<endl;
//    TAISAN x;
//    x.input();
//    int d; 
//	cout<<"Nhap vi tri muon chen : "<<endl;
//    cin>>d;
    
	
	//ham chen
	TAISAN x("Laptop", 10, "tot");
    InsertTaiSan(a,x,2);
    cout<<endl<<"Phieu sau chen la :"<<endl;
    a.output();
	// ham xoa
//    cout<<"Phieu sau xoa la "<<endl;
//    deleteTanSan(a,2);
//    a.output();

// ham sap xep

	cout<<endl<<"Phieu sau sap xep la : "<<endl;
	Sort(a);
	a.output();
    
}
