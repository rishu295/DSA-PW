#include <iostream>
using namespace std;
int main(){
    int nums[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(nums)/sizeof(nums[0]);
    int min_val = nums[0];
    int max_val = nums[0];
    for(int i=1; i<=n; i++){
        if(nums[i]<min_val){
            min_val = nums[i];
        }
        if(nums[i]>max_val){
            max_val = nums[i];
        }
    }
    cout<<min_val<<endl;
    cout<<max_val<<endl;
    return 0;
}