#include<bits/stdc++.h>

using namespace std;


int main(){
	int n = 5;
	int sum = 5;
	for( int i = 0 ; i < n ; i++){
		sum+=i;
	}
	cout << "Sum is " << sum  << endl;
	
	int tong = 0;
	for(int i = 0; i < n ; i++){
		tong+=i;
	}
	
	cout << "tong la : " << 5 + tong ;

}
