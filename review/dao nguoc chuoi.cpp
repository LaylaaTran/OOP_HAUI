#include<iostream>

using namespace std;

void Reverse(){
	char c;
	cout<<c;
	if(c!='\n'){
		Reverse();
		cout<<c;
	}
}


int main(){
    cout<<("Enter you sentence");
    Reverse();

}
