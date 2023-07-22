#include<iostream>

using namespace std;

void InputArray(int a[],int n){
	for(int i=0;i<n;i++){
          cin>>a[i];
	}
}


void Cmp(int a[], int n){
	int max1;
	int min2;
	(a[0]>a[1])? max1=a[0]:max1=a[1];
	(a[2]<a[3])?min2=a[2]:min2=a[3];
	
	if(max1>min2){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
}


int main(){
	int a[10], b[10], c[10];
	int n=4;
	int d;
	cin>>d;
	while
	InputArray(a,n);
	InputArray(b,n);
	InputArray(c,n);
	Cmp(a,n);
	Cmp(b,n);
	Cmp(c,n);
}