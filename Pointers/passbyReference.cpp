#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
     *a = *b;
     *b = temp;
    return;
}
int main(){
    int x,y;
    cin>>x;
    cin >> y;
    int *p1 = &x;
    int *p2 = &y;
    swap(p1, p2);
    cout << x << " " << y;
}