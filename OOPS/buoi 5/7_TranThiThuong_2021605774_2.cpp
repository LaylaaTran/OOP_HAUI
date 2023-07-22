#include<bits/stdc++.h>

using namespace std;

class ELECTRONIC{
	protected :
		float congSuat;
		float dienAp;
	public :
			ELECTRONIC();
			ELECTRONIC(float congSuat, float dienAp){
			this->congSuat = congSuat ;
			this->dienAp = dienAp;
		};
};

class MAYGIAT : public ELECTRONIC{
	private:
		int dungTich;
		char loai[30] ;
	public :
		MAYGIAT();
		MAYGIAT(ELECTRONIC(float congSuat, float dienAp, int dungTich, const char loai[]) : ELECTRONIC(congSuat,dienAp){
			this->dungTich = dungTich;
		//	this->loai = loai ;//
		strcpy(this->loai,loai);
		};
		
		void output();
};

void MAYGIAT::output(){
	cout << "Cong suat la : " << congSuat << " W "<<endl;
	cout << "Dien ap la : " << dienAp << " A "<< endl ;
	cout << "Dung tich la :" << dungTich << endl;
	cout << " Loai  la " << loai <<endl;
}

int main(){
	MAYGIAT a(1000,10 , 10, "Tot");

}
