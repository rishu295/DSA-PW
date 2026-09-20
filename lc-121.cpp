#include <iostream>
using namespace std;
int main(){
    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(prices[0]);
    int current = 0;
    int low = prices[0];
    int max_profit = 0;
    int profit = 0;
    for(int i=0; i<n; i++){
        current = prices[i];
        if(current<low){
            low = current;
        }
        if(current>low){
            profit = current - low;
        }
        if(profit>max_profit){
            max_profit = profit;
        }
    }
    cout<<max_profit;
}