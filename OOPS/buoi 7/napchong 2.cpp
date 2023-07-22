#include<bits/stdc++.h>

using namespace std;

class Distance {
	private :
		int feet;
		float inches;
	public:
		Distance(){
			feet =0;
			inches = 0;
		}
		
		Distance(int ft, int in){
			feet = ft;
			inches = in ;
		}
		
		void getdist(){
			cout << "Input feet is " ; cin>> feet << endl;
			cout << "Input inches is " ; cin >> inches << endl;
		}
		
		void showdist(){
			cout << "Feet is " << feet << endl;
			cout << "Inches is " << inches << endl;
		}
		
		Distance operator + (Distance d2){//Ha nap chong toan tu
			
			int f = feet + d2.feet ;
			float i = inches + d2.inches ;
			if(i >= 12.0){
				i -= 12.0;
				f++;
			}
			return Distance(f,i);
			
		}
};

int main(){
	Distance dist1, dist3, dist4;
	dist1.getdist();
	Distance dist2(11 , 6.25);
	dist3 = dist1 + dist2;
	dist4 = dist1+ dist2 + dist 3;
	cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist2 = "; dist2.showdist(); cout << endl;
	cout << "dist3 = "; dist3.showdist(); cout << endl;
	cout << "dist4 = "; dist4.showdist(); cout << endl;
	system("pause");

}
