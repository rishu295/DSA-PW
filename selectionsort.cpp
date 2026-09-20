#include <iostream>
using namespace std;
void selectionsort(int arr[], int n){
    for(int i=0 ; i<n-1; i++){
        int smallestidx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i],arr[smallestidx]);
    }
};
void printArray(int arr[], int n){
    for(int i=0 ; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
};
int main(){
    int n=5;
    int arr[5]={4,1,3,5,2};
    selectionsort(arr, n);
    printArray(arr, n);
    return 0;
};