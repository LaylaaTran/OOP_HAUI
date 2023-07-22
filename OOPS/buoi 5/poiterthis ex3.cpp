#include<bits/stdc++.h>

using namespace std;

class khoiHop{
	private :
		int dai,rong,cao;
	public :
//		khoiHop(int a=2 , int b=1, int c=2){
//			cout<<" Constructor da duoc goi !"<<endl;
//			this-> dai = a;
//			this-> rong = b;
//			this -> cao = c ;
//		}
	khoiHop(int a, int b, int c){
		this-> dai = a;
		this-> rong = b;
		this -> cao = c ;
	}
		
		int thetich(){ return this->dai*this->rong*this->cao;
		}
		
		int soSanh(khoiHop box){
			return this->thetich() > box.thetich();
		}
};

int main(){
//	khoiHop a;
//	cout<<"The tich khoi hop sau khi dung constuctor la : " <<a.thetich();
	
	khoiHop Box1(3,2,1);
	cout << "The tich box1 la : " << Box1.thetich() << endl;
	
	khoiHop Box2(4,5,6);
		cout << "The tich box2 la : " << Box2.thetich() << endl;
		
	if(Box1.soSanh(Box2) == 1 ) cout<< " \n Box2 nho hon Box1" <<endl;
	else cout << "Box2 lon hon box1" <<endl;
	

}
