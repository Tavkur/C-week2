#include<iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(double a, double b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
double divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; 
    }
    return static_cast<double>(a) / b;
}
int main(){
    cout<<"Enter the number: ";
    int a,b;
    cin>>a>>b;
    cout << "Addition: "<< add(a,b)<<endl;
    cout << "Subtraction: "<< subtract(a,b)<<endl;
    cout << "Multiplication: "<< multiply(a,b)<<endl;
    cout << "Division: "<< divide(a,b)<<endl;
}
