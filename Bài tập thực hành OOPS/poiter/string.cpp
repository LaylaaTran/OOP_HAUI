#include<iostream>
#include<string.h>

using namespace std;

void changeStr(char *p ){
	
	for(int i = 0 ; i < strlen(p) ; i++){
		if(*(p+i) >= 97 && *(p+i) <=123){
			*(p+i) = *(p+i)-32;
		}else if(*(p+i) >= 65 &&*(p+i) <= 90){
			*(p+i) = *(p+i)+32;
		}
		
	}
	
	while( *p != '\0'){
	 	cout << *p;
	 	p++;
	 }
	
}

void find(int *p ){
	
}

int main(){
	char a[256], *p;
	 p = a;
	 
	 cout << "Nhap chuoi : " ;
	 //gets(p);
	 cin.getline(p,256);
	 
	 cout << "Xuat chuoi : ";
	 
	 
	 changeStr(p);
}
