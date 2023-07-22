#include<iostream>
#include<fstream>

using namespace std;



int main(){
	
	//Buoc 1 : khai bao ra bien de doc file
	ifstream r; // khai bao bien r de doc du lieu
	
	// buoc 2 mo file can doc du lieu
	
	// open(<tenduongdan>,<che do lam viec>)
	//  che do :ios_base :: in : doc file, ios_base::out
	r.open("D:\\code\\OOPS\\buoi 7\\input.txt", ios_base :: in);
	
	// kiem tra xem mo thanh cong chua
	if(r.fail()==true){
		cout << "\n your file is not exist";
		return 0;
	}
	
	//buoc 3 : xu li file
	int x;
	int y;
	r >> x; r >> y;
	 // cin >> x >> y;
	//cout << "Tong cua 2 so nguyen " << x+ y << endl;
	
	// GHI FILE
	ofstream w;
	w.open("D::\\code\\OOPS\\buoi 7\\output.txt", ios_base :: out);
	w  << x + y ; // ghi va file output.txt
	w.close();// dong file lai 
	
	// buoc 4 dong file
//	r.close(); // dong file lai sau khi da xu li
	
	system("pause");
	return 0;

}
