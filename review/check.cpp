
#include<bits/stdc++.h>

using namespace std;

void input(int *&a, int &n){
	for(int i=0;i<n;i++){
		cout <<"a[" << i <<"] = ";
		cin >> a[i];
	}
}

void output(int *a, int n){
	for(int i=0;i<n;i++){
		cout << a[i] <<"   ";
	}	
}

void tachMang( int *a, int *&b, int *&c, int n,int &nb,int &nc){
	
	for(int i = 0 ; i < n ; i++){
		if(a[i] %2 == 0){
			nb++;
		}else{
			nc++;
		}
	}
	
	
	
	b = new int[nb];
	c = new int[nc];
	
	nb = 0 ;
	nc = 0;
	
	for(int i = 0 ; i < n ; i++){
		if(a[i] %2 == 0){
			b[nb++] = a[i];
		}else{
			c[nc++] = a[i];
		}
	}
	
	cout << "Tach a thanh 2 mang : " << endl ;
	output(b,nb);
	cout << endl ;
	output(c,nc);
	
}

void tronMang(int *b, int *c, int *&d, int nb, int nc){
	
	int nd = nb + nc ;
	d = new int [nd];
	for(int i = 0; i < nb ; i++){
		d[i] = b[i];
	}
	
	int cnt = 0;
	for ( int i = nb ; i < nd ; i++){
		d[i] = c[cnt++];
	}
	
	cout << " \nTron mang la :" ;
	output(d,nd);
	
}

void sx(int *a, int n){
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(a[i] % 2==0){
			swap(a[i], a[cnt++]);
		}
	}
	
	for(int i = 0 ; i < cnt+1 ; i++){
		for(int j = i + 1; j < cnt ; j++){
			if(a[i] > a[j]) swap(a[i], a[j]);
		}
	}
	
	for(int i = cnt +1 ; i < n-1 ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(a[i] < a[j]) swap(a[i], a[j]);
		}
	}
	
	output(a,n);
}


void find(int *a, int n){
	int cnt =0;
	for(int i=0;i<n;i++){
		if(a[i] < 0){
			cnt ++;
		}
	}
	if(cnt == 0){
		cout <<"\nMang X khong co phan tu am!";
	}
	else{
		int min;
		
		for(int i = 0 ; i < n ; i++){
			if( a[i] < 0){
				min = a[i];
				break;
			}
		}
		
		for(int i=0;i<n;i++){
			if(a[i] < 0 && a[i] < min){
				min = a[i];
			}
		}
		
		cout <<"\nPhan tu am nho nhat trong mang la: " << min;
	}
}

//void check(int *a, int n){
//	
//	
//	for(int i  = 0; i < n ; i++){
//		if(a[i] > 0){
//			cout << "Day khong lop le ! " ;
//			exit(0);
//		}
//	}
//	
//	int cnt= 0;
//	for(int i = 0 ; i < n-1 ; i++){
//		if(a[i] + a[i+1] < -10 ){
//			cnt++;
//			cout << cnt;
//			continue;
//			
//		}else{
//			cnt++;
//			cout << "" << a[i]  << " + "<< a[i+1] << "" << cnt;
//			cout << "Day khong hop le " ;
//			//exit(0);
//		}
//	}
//	
//	
////	cout << "Day hop le ! "; 
//	
//}

bool check(int *a, int n){
	for( int i = 0 ; i < n ; i++){
		if(a[i] > 0) return false;
	}
	
	for(int i = 0 ; i < n - 1 ; i++){
		else return false;
	}
	return true;
}

int main(){
	int *a;
	int n;
	cout <<"\nNhap so phan tu day: "; cin >>n;
	a = new int[n];
	input(a,n);
	
//	cout <<"\nDay vua nhap la: ";
//	output(a,n);
//	ofstream f;
//	f.open("D:\\CAU201.txt" , ios_base::out);
//	for(int i=0;i<n;i++){
//		f << a[i] <<"   ";
//	}
//	f.close();
//	
//	cout <<"\nDay sau khi sap xep: ";
//	sx(a,n);
//	
//	ofstream c;
//	c.open("D:\\CAU201.txt",ios_base :: app );
//	
//	c << endl;
//	for(int i=0;i<n;i++){
//		c << a[i] <<"   ";
//	}
//	c.close();
//	
	//find(a,n);
//	if(check(a,n) == true ) cout << "Day X hop le !" ;
//	else cout << "Day x khong hop le !";

//	check(a,n);
	
	int *b, *c;
	int nb = 0, nc = 0;
	tachMang(a,b,c,n, nb, nc);
	
	int *d;
	tronMang(b,c,d,nb,nc);
	
	delete a;
	return 0;
	
}