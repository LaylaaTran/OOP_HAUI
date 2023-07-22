#include<iostream>
#include<math.h>
using namespace std;

/*
Hệ thập phân sang nhị phân ,chia so 2 lấy dư từ dưới lên
Hệ nhỉ phân sang thập phân ,nhân ví dụ 1101 = 1*2^0+1*2^1+0*2^2+1*2^3 =11

*/




int CountDigit(int long long a, int &dem){
	while(a>0){
		a=a/10;
		dem++;
	}
	return dem;
}


int DoiSangHeThapPhan(long long a, int dem){
	int Sum;
	
	while(a>0){
	int b=a%10;
	a=a/10;
	if(dem>=0){
	dem--;
	Sum+=b*pow(2,dem);
	}
	cout<<"tong la"<<Sum<<endl;
	}
	
	return Sum;
	
}

void DoiSangNhiPhan(long long a){
	while(a>0){
		int dem=0;
		int b=a%2;
		a=a/10;
		int c=+=b*pow(10,dem++);
		cout<<
	}
	
}

void DoiSangThapLucPhan(long long a){
	while(a>0){
		int dem=0;
		int b=a%16;
		dem++;
		a=a/10;
		int c+=b*pow(10,dem++);
		if(b<10){
			cout<<c;
		}else{
		
			switch(c){
				case 10 :
					cout<< 'A';
					break;
				case 11:
					cout<<'B';
					break;
				case 12:
					cout<<'C';
					break;
				case 13:
					cout<<'D';
					break;
				case 14:
					cout<<'E';
					break;
				case 15:
					cout<<'F';
					break;	
		}
			
		}
	}
}


int main(){
	long long bNumber;//binaryNumber
	int dem=0;
	cout<<"Nhap so can chuyen  :";
	cin>>bNumber;
//	CountDigit(bNumber, dem);
//	cout<<"Tong";
//	cout<<DoiSangHeThapPhan(bNumber, dem);

//	cout<<DoiSangNhiPhan(bNumber);

	DoiSangThapLucPhan(bNumber);
	
}
