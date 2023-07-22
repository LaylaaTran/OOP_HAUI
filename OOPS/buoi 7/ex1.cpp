#include<bits/stdc++.h>

using namespace std;


//class{
//	private:
//		
//	public:
//}

//void printfNumber(int x){
//	cout << "Prints a int : " << x << endl;
//}
//
//void printfNumber(float x){
//	cout << "Prints a float : " << x << endl;
//}

class myClass{
	public :
		int var ;
		myClass(){
		}
		
//		myClass(int a){
//			var=a;
//		}
		
		myClass(int  a) : var(a){
		} ;
		
		
		myClass operator + (myClass &obj){
			myClass res;
			res.var = this->var+ obj.var;
			return res;
		}
};



int main(){
	myClass obj1(12), obj2(55);
	myClass res = obj1 + obj2;
	
	cout << res.var;
//	int a = 16;
//	float b= 10.13;
//	printfNumber(a);
//	printfNumber(b);
}
