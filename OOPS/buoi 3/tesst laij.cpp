#include<bits/stdc++.h>

using namespace std;

class ARRAY{
	private :
		int *VALUE;
		int n;
	public :
		ARRAY(); //contructor khong doi
		ARRAY(int *a, int b); // contructor co doi
		~ARRAY();
		void input();
		void output();
};

ARRAY::ARRAY(){
	n = 0 ;
}

ARRAY::ARRAY(int *a, int b){
	VALUE = a;
	n = b;
}

ARRAY::~ARRAY(){
	n = 0 ;
	delete[] VALUE;
}

void ARRAY::input(){
	cout << "\nSo luong phan tu mang : "; cin >> n;
	VALUE = new int[n];
	for(int i = 0 ; i < n ; i++){
		cout << " VALUE[" << i << "]= "; cin >> VALUE[i];
	}

}

void ARRAY::output(){
	cout << "\nMang la : " ;
	for(int i = 0 ; i < n ; i++){
		cout << VALUE[i];
	}
	
}
int main(){
	ARRAY a;
	a.input();
	a.output();
	
	ARRAY c( {1,2,3}, 3);
	c.output();

}
