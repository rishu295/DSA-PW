#include <iostream>
#include<vector>
using namespace std;
void sort01(int a, int b, vector<int>& nums){
    while(a<b){
        if(nums[a]==1 && nums[b]==0){
            swap(nums[a],nums[b]);
            a++;
            b--;
        }
        else if(nums[a]==0) a++;
        else b--;
    }
}
void display(vector<int> nums){
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<< " ";
}
}
int main(){
    int size;
    cout<<"Size: ";
    cin>>size;
    vector<int> nums;
    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int a =0;
    int b = size-1;
    sort01(a,b,nums);
    display(nums);

}