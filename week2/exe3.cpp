#include<iostream>
using namespace std;
int factorialIter(int n){
    int result = 1;
    for (int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}
int factorialRec(int n){
    if (n==0) return 1;
    return n * factorialRec(n - 1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial (Iterative): "<<factorialIter(n)<<endl;
    cout<<"Factorial (Recursive): "<<factorialRec(n)<<endl;
}