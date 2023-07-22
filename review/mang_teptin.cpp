#include<bits/stdc++.h>

using namespace std;

void input(int *&a, int n){
	cout << "Input n = "; cin >> n;
	
	a = new int[n];
	
	for( int i = 0 ; i < n ; i++){
		cout << "a[" << i << "]= "; cin >> *(a+i);
	}
}

void output(int *a, int n){
	for( int i = 0 ; i < n ; i++){
		cout <<  *(a+i);
	}
}

bool checkPrime(int n){
	if(n < 2) return false;
	else if (n == 2) return true;
	else{
		for ( int i = 2; i < sqrt(n) ; i++){
			if( i % 2 == 0) continue;
			if(n % i == 0 ) return false;
	}
	
	return true;
}
}

void findPrime(int *a, int n, int x){
	cout << "Nhap x = "; cin >> x;
	
//	ofstream w;
//	w.open("", ios_base::out);
	
	for(int i = 0 ; i < n ; i++){
		if(checkPrime(*(a+i))==true && *(a+i) < x){
			cout << *(a+i) << " ";
		//	w << *(a+i) ;
		}
	}
	
//	w.close();

	
}


int main(){
	int *a;
	int n;
	input(a,n);
	
	int x;
	findPrime(a,n,x);
}
