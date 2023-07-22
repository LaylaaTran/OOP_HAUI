#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char c[100] ;
	int n= strlen(c);
	for(int i=0;i<n;i++){
		fgets(c,100,stdin);
		if(c[i] == '\n'){
			cout<<"NO";
		}
	}
	
	
}
