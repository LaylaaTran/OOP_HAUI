#include<bits/stdc++.h>

using namespace std;

void InputArray(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

void SapXep(int a[], int n){
	int Tich=1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int swap=a[i];
				a[i]=a[j];
				a[j]=swap;
			}
		}	
	}
	for(int i=0;i<3;i++){
		Tich*=a[i];
	}
	cout<<Tich;

}


int main(){
	
	
	int a[1000];
	int n;
	do{
		cin>>n;	
	}while( n<3 || n> 1000);
	InputArray(a,n);
	SapXep(a,n);
	
}
