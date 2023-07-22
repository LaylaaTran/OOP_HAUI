#include<stdio.h>
#include <stdlib.h>
/*
    1. nhập mảng 
    2. xuất mảng 
    3. nhập mảng cho file 
    4. lấy dữ liệu từ file 


*/

void inputArr(int arr[100], int n ){
    for(int i =0 ; i<n; i++){
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[100], int n ){
    for(int i =0 ; i<n; i++){
        printf("%d  ", arr[i]);
    }
}
// 1.lay du lieu tu file 
void scanfintoFile(int arr[], int n , char fileName[50]){
    FILE *ptr ;
    ptr = fopen(fileName, "w"); // w : đọc file 
    if(ptr == NULL ){
        printf("\nERORR.....!");
        return; 
    }
    fprintf(ptr, "%d/n", n );// lấy số lượng phần tử 
    for (int i = 0; i < n; i++)
    {
        fprintf(ptr,"%d", arr[i]);
    }
    fclose(ptr); 
    
}

int main(){
    int arr[100]; 
    int n ; 
    do {
        printf("Nhap so luong phan tu : ");
        scanf("%d", &n);
    }while (n>100 || n<=0 );
    inputArr(arr,n);
    output(arr,n);
    scanfintoFile(arr, n , "Nhap1.txt");
}