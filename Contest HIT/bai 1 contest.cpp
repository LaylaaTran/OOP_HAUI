#include<iostream>

#include<stdio.h>
using namespace std;

void Input(int a[], int n){
	for(int i=0;i<=n;i++){
		a[i]=i;
	}
}

int Lcm(int a, int b){
	int lcm;
	int maxV = a*b;
    int step = std::max(a, b);
    for(int i = step; i <= maxV; i+= step){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    return lcm;
}

int UCLN(int A, int B) {
    if (B == 0)
        return A;
    return UCLN(B, A%B);
}

void FindSum(int a[], int n){
	int Sum=0;
	for(int i=0;i<n-3;i++){
		for(int j=i+1;j<n-2;j++){
			for(int k=j+2;k<n-1;k++){
				for(int g=j+3;g<n;g++){
					Sum=a[i]+a[j]+a[k]+a[g];
				
					
					if(Sum == n && UCLN(a[i],a[j]) ==  Lcm(a[g], a[k]) && UCLN(a[k],a[g]) ==  Lcm (a[i],a[j]) ){
						cout<<a[i] <<a[j] <<a[g] <<a[k] <<endl;
						}
					}
				}
			}	
	}
}

int main(){
	int n;
	cin>>n;
	int arr[100];
	Input(arr,n);
	FindSum(arr,n);
	



}
