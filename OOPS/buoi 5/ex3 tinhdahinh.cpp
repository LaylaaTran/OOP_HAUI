#include<bits/stdc++.h>

using namespace std;

//tinh da hinh
/*
XAY ra khi co mot he thong phan cap cua cac lop , cp lq nhau boi tinh KE THUA
vd:
*/


class Enemy{
	private:
		int attackPower;
	public:
		friend class Ninja;
		friend class Monster;
		void setAttackPower(int a){
			attackPower = a;
		}
		
		// virtual void attack() =0 ; ham thuan ao , trong lop co so phai ghi de
//		virtual void attack(){
//			
//		}
};

class Ninja: public Enemy{
	public :
		
		void attack{
		cout << "Ninja  " <<attackPower <<endl;
		};
};


class Monster : public Enemy{
	public :
		void attack(){
			cout << "monster - " <<attackPower <<endl;
		}
};
int main(){
	Ninja n;
	Monster m;
	
	Enemy *a= &n;
	Enemy *b =&m;
	a->setAttackPower(10); // n.setAttackPower(10)
	b->setAttackPower(30);
	
	n.setAttackPower();
	m.setAttackPower();
	
	//n.attack(); lien quan virtual
}
