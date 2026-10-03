#include <iostream>
using namespace std;
void find(int n, int *p1, int *p2){
    *p2 = n%10;
    while(n>9){
        n /= 10;
    }
    *p1 = n;
    return;
}
int main(){
    int n;
    cin>>n;
    int firstDigit, lastDigit;
    int *p1 = &firstDigit;
    int *p2 = &lastDigit;
    find(n, p1, p2);
    cout<< firstDigit << " "<< lastDigit;

}