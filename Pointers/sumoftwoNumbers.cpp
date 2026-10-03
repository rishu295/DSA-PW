#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number: ";
    cin>>x;
    int y;
    cout<<"Enter second number: ";
    cin>>y;
    int* p1 = &x;
    int* p2 = &y;
    int sum = *p1 + *p2;
    cout<<"Sum: "<<sum;

}