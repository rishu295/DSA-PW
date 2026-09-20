#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[7] = {1,2,3,4,5,6,7};
    int k=3;
    for(int i=1; i<=k; i++){
        int temp = arr[n-1];
        for(int j=n-1; j>0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    for(int a=0; a<n; a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
    return 0;
}