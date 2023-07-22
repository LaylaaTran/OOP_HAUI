#include<iostream>

using namespace std;

void input(int *&a, int &n){
	cout << "Nhap n = "; cin >> n;
	while(n < 1 || n> 20){
		cout << "Nhap lai n= " ;
		cin >> n;
	}
	
	a = new int[n];
	for(int i =0 ;i < n ; i++){
		cout << "a[" << i <<"]=" ;
		cin >> *(a+i);
	}
}

void output(int *a, int n){
	for(int i =0 ; i < n ; i++){
		cout << " " << *(a+i);
		
	}
}

int main(){
	int *a , n;
	input(a,n);
	output(a,n);
}