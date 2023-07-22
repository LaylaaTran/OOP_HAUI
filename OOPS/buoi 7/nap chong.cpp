#include<bits/stdc++.h>

using namespace std;

class Counter{
	private:
		int count;
	public :
		Counter(){
			count=0;
		}
		int getCount(){
			return count;
		}
		
		Counter operator ++(){
			count+=1;
			Counter temp ;
			temp.count = count;
			return temp;
		}
};

int main(){
	Counter c1,c2;
	cout << "Count c1 : " << c1.getCount()<< endl;
	cout << "Count c2 : " <<c2.getCount() << endl;
	
	++c1;
	c2=++c1;
	cout << " count c1 : " << c1.getCount()<< endl;
	cout << "Count c2 : " <<c2.getCount() << endl;
	system("pause");

}
