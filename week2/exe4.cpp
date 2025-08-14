#include<iostream>
using namespace std;
int sumRow(const int arr[][3], int row){
    int sum = 0;
    for(int j = 0; j < 3; j++){
        sum += arr[row][j];
    }
    return sum;
}
int sumCol(const int arr[][3], int col){
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += arr[i][col];
    }
    return sum;
}
int main(){
    int mat[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
   for(int i=0;i<3;i++){
       cout<<"Sum of row "<<i+1<<": "<<sumRow(mat,i)<<endl;
   }
   for(int i=0;i<3;i++){
       cout<<"Sum of column "<<i<<": "<<sumCol(mat,i)<<endl;
   }
    return 0;
}
