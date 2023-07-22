#include<bits/stdc++.h>

using namespace std;

class hangHoa{
	private :
		int maHang;
		char tenHang[30];
		int gia, soLuong;
	public :
		void Nhap();
		void Xuat();
};

void hangHoa::Nhap(){
	cout<<"Nhap ma hang : " ; cin>>maHang;
	cout <<"Nhap ten hang : "; fflush(stdin); gets(tenHang);
	cout<<"Nhap don gia  : "; cin>>gia;
	cout<<"Nhap so luong : " ; cin >>soLuong;
}

void hangHoa::Xuat(){
	cout<<"Ma hang la :" <<maHang<<",";
	cout<<"Ten hang la :" <<tenHang<<",";
	cout<<"Don gia la :"<<gia<<",";
	cout<<"So luong la :" <<soLuong<<endl;
	cout<<"Thanh tien la :" << gia*soLuong;
}

int main(){
	int n;
	cout<<"Nhap so mat hang n : "; cin>>n;
	for(int i=0;i<n;i++){
		hangHoa a;
		a.Nhap();
		a.Xuat();
		if(i!=n-1){
			cout<<endl<<"MAT HANG TIEP THEO LA : "<<endl;
		}
	}
	

}
