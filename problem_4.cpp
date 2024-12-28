#include<bits/stdc++.h>
using namespace std;

int countGoodPairs(const vector<int>& nums1, const vector<int>& nums2,int k){
    int count=0;
    for(int i=0; i<nums1.size(); i++){
        for(int j=0; j<nums2.size(); j++){
            if(nums1[i] % nums2[j]*k == 0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums1={1,3,4};
    vector<int> nums2={1,3,4};
    int k=1;

    cout<<"Good pairs count : "<<countGoodPairs(nums1,nums2,k);
}