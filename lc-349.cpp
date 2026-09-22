#include <iostream>
using namespace std;
int main(){
    int nums1[]={4,9,5};
    int nums2[]={9,4,8,9,4};
    int a=0;
    int k=0;
    int res[k];
    int n1= sizeof(nums1)/sizeof(nums1[0]);
    int n2= sizeof(nums2)/sizeof(nums2[0]);
    if(n1>n2){
        while(a<n2){
            for(int i=0; i<n1; i++){
                if(nums1[i]==nums2[a]){
                    int x;
                    for(x=0; x<k; x++){
                        if(res[x] == nums1[i]){
                            break;
                        }
                    }
                    if(x==k){
                        res[k] = nums1[i];
                        k++;
                    }
                    
                }
            }
            a++;
        }
    }
    else if(n2>n1){
        while(a<n1){
            for(int i=0; i<n2; i++){
                if(nums2[i]==nums1[a]){
                    int x;
                    for(x=0; x<k; x++){
                        if(res[x] == nums2[i]){
                            break;
                        }
                    }
                    if(x==k){
                        res[k] = nums2[i];
                        k++;
                    }
                }
            }
            a++;
    }
    }
    for(int i=0; i<k; i++){
        cout<<res[i]<<" ";
    }

}

    


