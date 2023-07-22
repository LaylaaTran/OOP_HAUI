#include<iostream>
#include<math.h>

using namespace std;

int CoutDigit(int a,int &dem){
	while(a>0){
		a=a/10;
		dem++;
		
	}
	
	return dem;
}

int ArmStrong(int a, int dem){
	int c;
	int Sum=0;
	while(a>0){
		c=a%10;
		a=a/10;
		Sum+=pow(c,dem);
	}
	return Sum;
}



int armstrong (int a, int dem ){

	if(a==0){
		return 0; 
	}
	int n= pow(a%10,dem);
	int b = armstrong(a/10, dem) +n ;
	return b  ; 
		
}

int main(){
   int n;
   int dem=0;
   cout<<"Nhap n :";
   cin>>n;
	CoutDigit(n, dem);

	cout<<ArmStrong(n, dem)<<endl;;
	cout<<armstrong(n,dem);
}
