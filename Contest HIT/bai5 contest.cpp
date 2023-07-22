#include<bits/stdc++.h>

using namespace std;

void input(int x[], int &n ){
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    
}

void Input(int x[], int &n ){
    for (int i = 0; i < n; i++)
    {
      x[i]= 1;
    }
    
}



void deleteArray(int x[10000], int &n, int index ){
    for (int i = index; i < n; i++)
    {
        x[i]= x[i+1];
    }
    n--;
    
}

void DemLan(int x[],int dem[], int &n){
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(x[i]==x[j]){
				dem[i]++;
				deleteArray( x, n, j);
			}	
		}
	}
	
}

void outPut(int x[], int dem[], int n){
	for(int i=0;i<n;i++){
		cout<< x[i] <<" "<<dem[i]<<endl;
	}
}

int main(){
	
	
	
	int a[10000];
    int n; 
    int dem[10000];
     
    
        cin>> n ; 
   
    
	input(a,n);
	Input(dem,n);
	DemLan(a,dem,n);
	outPut(a,dem,n);
}
