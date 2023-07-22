#include<stdio.h>


long int g_thua(int n){
	int i;
	long int gt=1;
	if(n>1){
		for(int i=1;i<=n;i++){
			gt*=i;
		}
	}
	return gt;
}




int main(){
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	printf("Giai thua la = %d", g_thua(n));
}