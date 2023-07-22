#include<bits/stdc++.h>

using namespace std;

void input(float &x, float &y){
	do{
		cout <<"\nNhap so thuc x: "; cin >>x;
		cout <<"\nNhap so thuc y: "; cin >>y;
		if(x>=y){
			cout <<"\nNhap lai x <y !";
		}
	}while(x>=y);
}

void input_n(int &n){
	do{
		cout <<"\nNhap so nguyen n : "; cin >>n;
		if(n<=0 || n>=50){
			cout <<"\nNhap lai 0<n<50 !";
		}
	}while(n<=0 || n>=50);
}

double tinh_f(float x, float y){
	double f = exp(fabs(x)) + fabs(y) + sin(2*x);
return f;
}

double tinh_p(float x, int n){
	double p = 30620;
	for(int i=2; i<=n;i++){
		p += pow(x,i)/ pow(i,i); 
	}
	return p;
}

int main(){
	float a,b;
	int n;
	input(a,b);
	input_n(n);
	cout <<"\nGia tri cua F(x,y) = " << tinh_f(a,b);
//	cout <<"\nGia tri cua bieu thuc P(x,n) = " << tinh_p(a,n);
	return 0;
}