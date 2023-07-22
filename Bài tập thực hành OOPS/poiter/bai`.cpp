#include<bits/stdc++.h>

using namespace std;

void input(int &ax, int &ay){
	cout << "Nhap toa do x : " ; cin >> ax;
	cout << "Nhap toa do y : " ; cin >> ay;
}

int distance(int ax, int ay, int bx, int by){
	return abs(bx-ax) - abs(by-ay);
}

int tinhF(int ax, int ay, int bx, int by, int &n){
	
	cout << "Nhap n = "; cin >> n;
	
	float F = 0 ;
	
	for( int i = 1 ; i < n ; i++){
		F += (float) pow(distance(ax,ay,bx,by) ,i ) / (2*i +1);
	}
	
	return F + 2020*n;
}

int main(){
	int ax, ay;
	input(ax,ay);
	
	// cau b
	int bx,by;
	input(bx, by);
	
	cout << "Khoang cach Manhattan : " << distance(ax,ay,bx,by) << endl;
	
	// cau c
	int n;
	cout << " F la : " << tinhF(ax,ay,bx,by,n);
	
	
	
	

}
