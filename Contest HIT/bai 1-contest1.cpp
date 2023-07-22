#include<iostream>

using namespace std;





int main(){
	int n;
	int Sum=0;
	cout<<"Nhap n=";
	cin>>n;
	while(n>0){
		int a;
		a=n%10;
		n=n/10;
		Sum+=a;
	}
	if(Sum==9)
		cout<<"VANG";
		
	else
		cout<<"KHONG";
		
}
