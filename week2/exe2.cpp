#include<iostream>
using namespace std;
double computeAvr(int arr[],int size){
    int sum=0;
    int avr;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        avr=sum/size;
    }
    return avr;
}
int findMin(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int findMax(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[10];
    cout<<"Enter 10 numbers: ";
    for (int i=0;i<10;i++){
        cin>>arr[i];
    }
    double average=computeAvr(arr,10);
    int min=findMin(arr,10);
    int max=findMax(arr,10);
    cout<<"Average: "<<average<<endl;
    cout<<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;
}