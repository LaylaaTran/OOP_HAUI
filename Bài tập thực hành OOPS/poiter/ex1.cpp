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

int findMin(int *a, int n){
	int min;
	for(int i = 0 ; i < n ; i++){
		if(*(a+i) > 0 ){
			min = *(a+i);
			break;
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		if(*(a+i) < min && *(a+i) > 0){
			 min = *(a+i);
		}
	}
	return min;
}

void findAbs(int *a, int n){
	for(int i = 0 ; i < n ; i++){
		if( abs(*(a+i)) >  findMin(a,n)){
			cout << "\n Vi tri " << i << " la so " << a[i];
		}
	}
}

void deleteArr(int *&a, int &n){
	
	int pos ;
	cout << "\nNhap vi tri can xoa pos = " ;
	cin >> pos;
	int *b = new int[n-1];
	
	for(int i = 0 ; i < n ; i++){
		b[i] = a[i];
	}
	
	delete a;
	
	for(int i = pos ; i < n ; i++){
		b[i-1] = b[i];
	}
	n--;
	a = b;
	cout << "\n Mang sau xoa la :";
	output(a,n);
	
}

void insert(int *&a, int &n){
	int pos, val;
	cout << "Nhap vi tri can chen la : " ; cin >> pos ;
	cout << "Nhap gia tri can chen la : "; cin >> val;
	
	int *b = new int[n+1];
	for(int i =0 ; i < n ; i++){
		b[i] = a[i];
	}
	
	delete a;
	
	for(int i = n ; i > pos ; i--){
		b[i]= b[i-1];
	}
	b[pos] = val;
	n++;
	
	a = b;
	cout << "\nMang sau chen la : ";
	output(a,n);
}

void sortUp(int *a, int n){
	for(int i = 0 ; i < n - 1; i++){
		for(int j = i+1 ; j < n ;j++){
			if(a[i] < a[j]){
				swap(a[i], a[j]);
			}
			
		}
	}
	
	cout << "\n MAang tang dan la : ";
	output(a,n);
}

void freedom(int *a){
	delete a;
	cout << " \n Da giai phong " ;
}

int main(){
	int *a, n;
	input(a,n);
	output(a,n);
//	cout << endl << findMin(a,n);
	findAbs(a,n);
	
	
	deleteArr(a,n);
	insert(a,n);
	sortUp(a,n);
}
