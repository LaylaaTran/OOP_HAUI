#include<iostream>

using namespace std;

void input(float a[], int &n){
	cout << "Nhap n= "; cin >> n;
	while(n < 1 || n >30){
		cout << "Nhap lai n= ";
		cin >> n;
	}
	
	for(int i = 0;i < n ;i++){
		cout << "a[" << i << "]=" ;
		cin >> a[i];
	}
}

void output(float a[], int n){
	for(int i =0 ; i < n ; i++){
		cout << a[i] << " ";
	}
}

void tach(float a[], float b[], float c[], int n){
	int count1=0;
	int count2=0;
	for(int i =0 ; i < n ; i++){
		if(a[i] > 0){
			b[count1++] = a[i];
		}else{
			c[count2++] = a[i];
		}
	}
	cout << "Mang b la : ";
	output(b,count1);
	cout << endl << "Mang c la : " ;
	output(c, count2);
}

int main(){
	float a[10];
	float b[10];
	 float c[10];
	int n;
	input(a,n);
	tach(a,b,c,n);
	
} 
