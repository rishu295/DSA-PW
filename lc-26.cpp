#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    
    int slow = 0;
    int fast = 1;
    for(int fast = 1; fast<=n; fast++){
        if(nums[slow]!=nums[fast]){
            slow++;
            nums[slow]=nums[fast];
            };
        };
        return slow+1;
}