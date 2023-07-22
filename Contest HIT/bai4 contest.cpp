#include<iostream>


using namespace std;

int main(){
long long n;
long long a=0;
long long b=0;
cin>>n;
while(n>0){
	
	a+=n%10;
	n=n/10;
}
if(a<10){
cout<<a;
}else{
;
  while(a>0){
  b+=a%10;
  a=a/10;
  }cout<<b;
}
}

	
	
	

