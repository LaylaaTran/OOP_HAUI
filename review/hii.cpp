#include<iostream>

using namespace std;

const int MAX_SIZE = 100;

void InpArr(int a[], int n){
	for(int i=0;i<n;i++){
	cout<<"a["<<i<<"]= ";
	cin>>a[i];
	}
}


void OutpArr(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
void ArrangeArrDown(int a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
			int swap = a[i];
			a[i]=a[j];
			a[j]=swap;
			}
		}
	}
	
}

//max
void Max(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]>a[i+1]){
			int swap =a[i];
			a[i]=a[i+1];
			a[i+1] = swap;
		}
	}
}

//tim max va vi tri
void Maxarr(int a[], int n){
	int max = a[0];
	int index =0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
			index=i;
		}
	}
	cout<<"Vi tri la "<<index+1<<endl;
}


int main(){
	int a[MAX_SIZE];
	int n;
	
	do{
		cout<<"Nhap n=";
		cin>>n;
	}while(n<0 || n>MAX_SIZE);

	InpArr(a,n);
//	OutpArr(a,n);
	
//	cout<<endl;
//	cout<< MaxArr(a,n);

	Maxarr(a,n);
}
