#include<iostream>
#include<string.h>
using namespace std;




int main(){
	
	char Word[1000];
	char Nguoc[1000];
	cin>>Word;
	cin>>Nguoc;
	char Name[1000];
	bool True=1;
	if(strlen(Word) != strlen(Nguoc)) return 0;
	
	int n = strlen(Word);
	for(int i=0;i<n/2;i++){
			
			if(Word[i] != Nguoc[n-1-i]){	
			True =0;
		   }
		}
	
	if(True==1) cout<<"YES";
	else cout<<"NO ";
	
}