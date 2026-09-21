#include <iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,3,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int p = 0;
    int q = 0;

    while(q < n) {
        if(arr[q] != 0) {
            swap(arr[p], arr[q]);
            p++;
        }
        q++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
