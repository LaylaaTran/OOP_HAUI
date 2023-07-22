#include<iostream>
#include<string.h>
using namespace std;

int FindString(char a[]){
	size_t n = strlen(a);
	int count=0;
	
	for(int i=0;i<n-1;i++){
			if(a[i] == 'a'){
				for(int j=i;j<n;j++){
					if(a[j]== 'z'){
						count++;
					}
		}
	}
}

	return count;
}


int main(){
	char c[100];
	fgets(c, sizeof(c), stdin);
	cout<<FindString(c);
	

}
