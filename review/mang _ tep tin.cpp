#include<bits/stdc++.h>

using namespace std;

void input(int *&a, int &n){
	cout << "Nhap n = "; 
	cin >> n;
	while(n < 3 || n > 30){
		cout << "Nhap lai n = ";
		cin >> n;
	}
	
	a = new int[n];
	for ( int i = 0 ; i < n ; i++){
		cout << "a[" << i << "]=" ;
		cin >> *(a+i);
	}
}

void inputFile(int *a, int n){
	ofstream out;
	out.open("D:\\code\\review\\CNTT6Ca1.TXT", ios_base :: out);
	
	for( int i = 0 ; i < n; i++){
		out << *(a+i);
	}
}

void output(int *a, int n){ // ghi mang vao file
	for ( int i = 0 ; i < n ; i++){
		cout << *(a+i) << " ";
	}
}

void findNum(int *a, int n){
	int max;
	int count=0;
	for(int i = 0 ; i < n ; i++){
		if( *(a+i) < 0){
			max = *(a+i);
			break;
		}
	}
	
	for(int i = 0 ; i < n; i++){
		if( *(a+i) < 0 && *(a+i) > max){
			max = *(a+i);
			count++;
		}
	}
	
	if(count == 0 ) cout << "Khong co so am nao !";
	else
		cout << "\nSo am lon nhat la : " << max << endl;
}

void checkArr(int *a, int n, float &x){
	
	cout << "\nNhap x = "; cin >>x;
	
	int count = 0;
	for(int i = 0 ; i < n ; i++){
		if(*(a+i) > x){
			count ++ ;
		}
	}
	
	if(count == 0 ) cout << "\nKhong co so nao lon hon x! " << endl;
	else cout << "\nCo " << count << " so lon hon x ! ";
}

void Max2(int *a, int n){
	int max1, max2;
	if(*a >= *(a+1)) {
		max1 = *a;
		max2 = *(a+1);
	}else{
		max1 = *(a+1);
		max2= *a;
	}
	
	
	for(int i = 0 ; i < n ; i++){
		if(*(a+i) > max1){
			max2 = max1;
			max1 = *(a+i);
			
		}
	}
	
	
	cout << "\nPhan tu lon thu 2 la : " << max2 ;
	
	ofstream w;
	w.open("D:\\code\\review\\CNTT6Ca1.TXT", ios_base :: out);
	w << "Phan tu lon thu 2 la : " << max2 ;
	w.close();
}


int main(){
	
	int *a, n;
	input(a,n);
	output(a,n);
//	inputFile(a,n);
	findNum(a,n);
	
	float x;
	checkArr(a,n,x);
	Max2(a, n);
}
