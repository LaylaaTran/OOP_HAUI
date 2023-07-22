#include<iostream>

using namespace std;

void Input(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}


int MaxArr(int a[], int n){
	int Max = INT_MIN;
	for (int i = 0; i < n; i ++) {
   		 for (int j = i; j < n; j ++) {
        	int sum = 0;
        	for (int k = i; k <= j; k ++) {
            sum += a[k];
        	}
        Max = max(Max, sum);
   		}
	}
	return Max;
}


int main(){
	int a[100];
	int n;
	cin>>n;
	Input(a,n);
	cout<<MaxArr(a,n);
	

}
