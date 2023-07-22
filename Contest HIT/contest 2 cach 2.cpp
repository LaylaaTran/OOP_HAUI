#include<iostream>
#include<limits.h>
#include <math.h>
using namespace std;

void InputArray(int a[],int n){
	for(int i=0;i<n;i++){
		do {
          cin>>a[i];
        }while (abs(a[i]) >= 1000);
    }
}
void swap (int &a, int &b){
	int temp = a;
		a = b ; b= temp ; 
}
int max1(int a[], int n){
	int max1=INT_MIN; 
	for(int i=0;i<n;i++){
		if(max1 < a[i])
			max1 = a[i];
	}
	return max1;
}
int max2(int a[], int n){
	int max2=INT_MIN; 
	for(int i=0;i<n;i++){
		if(max2 < a[i] && a[i]!= max1(a,n) )
			max2 = a[i];
	}
	return max2;
}
int max3(int a[], int n){
	int max3=INT_MIN; 
	for(int i=0;i<n;i++){
		if(max3 < a[i] && a[i]!= max2(a,n)&&a[i]!= max1(a,n) )
			max3 = a[i];
	}
	return max3;
}


int main(){
	int a[10000];
	int n;
	do{
		cin>>n;	
	}while( n<3 || n> 10000);
	InputArray(a,n);
	cout<<max1(a,n)*max2(a,n)*max3(a,n);
}