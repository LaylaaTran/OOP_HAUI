#include<iostream>

using namespace std;

void Del(int a[], int &n, int pos){
	for(int i=pos; i<n-1; i++){
		a[i]=a[i+1];
	}n--;
}

int main(){
		int n, a[100];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		int count=1;
		cout<<a[i]<<" ";
		for( int j=i+1; j<n; j++){
			if(a[i]==a[j]){
				count++;
				Del(a,n,j);
				
			}
		}cout<<count<<endl;
	}

	
	
	return 0;
}