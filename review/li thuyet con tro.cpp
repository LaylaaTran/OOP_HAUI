#include<iostream>

using namespace std;

/**con trỏ cùng để lưu vị trí của ô nhớ khi can loi no ra
int &a địa chỉ ô nhớ a -->được lưu trong int *a
dùng để lưu giá trị
còn int a=10 được lưu trong  int a

tai sao can con tro? con trỏ là 1 biến dúng để lưu địa chỉ ,khai bacos khac khai báo thông thường là thâm 1 dấu sao

do cơ chế hoạt động
*/

/*
Cap phat bo nho



*/

/*




*/


int main(){
	float f=1.5;
	float *p; //p la mot bien luu dia chi
	p=1.5;//sẽ sai vì p khong phai 1 kieu float mà la mot bien de luu dia chi float
	//p va f : p=&f ,f=*p
	muon lam t pahi de p=&f;
	
	cout<<*p;
	return 0;


}
