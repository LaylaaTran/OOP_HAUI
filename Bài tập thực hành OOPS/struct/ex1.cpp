#include<bits/stdc++.h>

using namespace std;

void input(int *&a, int &n){
	
	cout << "Nhap n = "; cin >> n;
	
	while(n < 0 || n > 50){
		cout << "Nhap lai n = "; cin >> n;
	}
	
	a = new int[n];
	
	for( int i = 0 ; i < n ; i++){
		cout << "a[" << i << "]= " ;
		cin >> *(a+i);
	}
	
}

void output(int *a, int n){
	
	for( int i = 0 ; i < n ; i++){
		cout << *( a + i ) << " " ;
	}
	
	cout << endl;
}

void sort(int *a, int n){
	
	for(int i = 0 ; i < n-1 ; i++){
		
		for( int j = i + 1 ; j < n ; j++){
			
			if ( *(a + i) > *(a + j) ) {
				
				swap(*(a + i ) , *(a + j));
			}
		}	
	}
	
//	ofstream b;
//	b.open("D:\\code\\review\\ABCD.TXT", ios_base :: out);
//	
//	for ( int i = 0 ; i < n ; i++){
//		b << *(a+i)  << " ";
//	}
//	
//	b.close();	
}

void sum(int *a, int n){
	
	int sum=0;
	float P,Q;
	
	for ( int i = 0 ; i < n ; i++){
		sum+=*(a + i);
	}
	
	Q = (float)sum/n;
	sort(a,n);
	P = *(a) = *(a + n -1);
	
	ofstream b;
	
	b.open("D:\\code\\review\\ABCD.TXT",ios_base :: out);
	b << "Trung binh la : "  << Q << endl << "Tong dau cuoi la : "<< P ;
	b.close();
}

void insert(int *&a, int &n, int x){
	
	int *b = new int[n+1];
	
	for( int i = 0 ; i < n ; i++){
		
		b[i] = a[i];
		
	}
	
	delete a;
	
	
	cout << "Nhap x = "; 
	cin >> x;
	
	for ( int i = n ; i >=0  ; i--){
		
		b[i] = b[i-1];
		
	}
	
    b[0] = x ;
    
	n++;
	
	a = b ;
	
	output(a,n);
}

int main(){
	int *a, n;
	input(a,n);
	output(a,n);
//	sort(a,n);
	//output(a,n);
	//sum(a,n);
	int x;
	insert(a,n,x);
}
