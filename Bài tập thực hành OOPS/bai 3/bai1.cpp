#include<bits/stdc++.h>

using namespace std;

int primeNum(int n){
	int count=0;
	
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			count++;
		return false;
		}
		
	}
	
	if(count==0){
		return true;
	}
}

void Bai3(int n){
	float tong=0;
	for(int i=1;i<=n;i++){
		tong+=(float)1/i;
	}
	
	cout<<"Tong la " <<tong;
}

void Bai4(int n){
	float F=0;
	if(n%2==0){
		for(int i=1;i<=n;i++){
			F+=(float)1/pow(2,i);
		}
	}else{
		for(int i=1;i<=n;i++){
				F=sqrt(pow(i,2)+1);
		}
	
	}
	
	cout<<"F la : "<<F;
}

void Bai5(int n){
	float S=0;
	if(n%2==0){
		for(int i=0;i<=n;i++){
			S+=(float)pow(n,i+1)/pow(3,i);
		}
	}else{
		S=0;
	}
	
	
	cout<<"S la "<<S;
}




int main(){
//	int n;
//	cout<<"Input n= ";
//	cin >> n;
//	if(primeNum(n)){
//		cout<<n<<" is prime  number";
//	}else{
//		cout<<n <<" is not prime number";
//	}

}
