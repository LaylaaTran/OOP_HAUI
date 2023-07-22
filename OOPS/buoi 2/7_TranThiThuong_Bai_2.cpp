#include<bits/stdc++.h>

using namespace std;

class ARRAY{
	private:
		int *VALUE;
		int n;
	public :
		ARRAY();
		ARRAY(int *a, int b);
		~ARRAY();
		void NHAP();
		void XUAT();
};

ARRAY::ARRAY(){
	n=0;
}

ARRAY::ARRAY(int *a, int b){
	n=b;
	VALUE=a;
}

ARRAY::~ARRAY(){
	n=0;
	delete[] VALUE;
}

void ARRAY::NHAP(){
	cout<<"Nhap so luong phan tu n: "; cin>>n;
	cout<<"Nhap phan tu trong mang : ";
	VALUE=new int[n];
	for(int i=0;i<n;i++){
		cout<<"VALUE["<<i<<"]=" ; cin>>VALUE[i];
	}
}

void ARRAY::XUAT(){
	cout<<"Mang la : "; 
	for(int i=0;i<n;i++){
		cout<<VALUE[i]<<" ";
	}
	cout<<endl;
}

int main(){
	cout<<"Mang la: "<<endl;
	ARRAY A;
	A.NHAP();
	A.XUAT();
	
	cout<<"Mang truyen doi so la : "<<endl;
	int a[3]={1,2,3};
	
	ARRAY B( a , 3);
	B.XUAT();
	


}
