#include<stdio.h>
long int g_thua(int n){
	
	 int gt=1;
	if(n>1){
		for(int i=1;i<=n;i++){
			gt*=i;
			printf("%d", gt);
		}
	}
	return n;	
}	     
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("giai thua la = %d",g_thua(n));
	return 0;
}