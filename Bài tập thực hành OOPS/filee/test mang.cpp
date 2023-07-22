#include<bits/stdc++.h>

using namespace std;

void input (int *&a, int &n){
	ifstream r;
	r.open("D:\\code\\bai tap thuc hanh\\filee\\INPUT.txt", ios_base :: in);
	
	if(r.fail()== true){
		cout << "file is not exit ! ";
	}
	
	r >> n ;
	
	a = new int[n];
	for(int i = 0 ; i < n ;i++){
		r >> *(a+i);
	}
	
	r.close();
	
}

void output(int *a, int n){
	ofstream w;
	w.open("D:\\code\\bai tap thuc hanh\\filee\\PUT.txt", ios_base :: out);
	
	for( int i = 0 ; i < n ; i++){
		w << *(a+i);
	}
	
	w.close();
}

int main(){
	int *a, n;
	input(a,n);
	output(a,n);
	system("pause");
	return 0;

}
