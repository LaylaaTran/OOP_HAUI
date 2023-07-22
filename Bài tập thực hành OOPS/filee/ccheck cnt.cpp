#include<bits/stdc++.h>

using namespace std;

bool check( int n){
	if( n < 2) return false;
	else{
		if( n == 2) return true;
		else{
			if(n%2 == 0) return false;
			else{
				for( int i = 2 ; i < sqrt(n) ; i++){
					if( n % i == 0) return false;
				}
			}
		}
	}
	return true;
}
	

int main(){
	ifstream rd;
	rd.open("D:\\code\\bai tap thuc hanh\\filee\\INPUT.txt", ios_base :: in );
	
	int x;
	rd >> x;
	
	ofstream we;
	we.open("D:\\code\\bai tap thuc hanh\\filee\\OUTPUT.txt", ios_base :: out);
	if(check(x) == true){
		we << "true";
	}else{
		we << "false" ;
	}
	we.close();
	rd.close();
	system("pause");
	return 0;

}
