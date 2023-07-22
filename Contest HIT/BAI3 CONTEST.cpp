#include<iostream>
using namespace std ; 
int main (){
     long long A , B, C ; 
  
  cin >> A;
  cin>>B;
  cin>>C;
  
  
    
     
    if (A+B-C ==0  || A-B+C==0 || - A +B +C ==0 )
    {
        cout << "yes";
    }else {
        cout << "no";
    }
  
}
