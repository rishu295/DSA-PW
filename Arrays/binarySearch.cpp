#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target element: ";
    cin>>target;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==target) flag = true;
    }
    if(flag=true) cout<<"Element found";
    else cout<<"Element not found";
}