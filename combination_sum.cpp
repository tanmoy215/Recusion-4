#include<bits/stdc++.h>
using namespace std;
void CombinationSum(vector<int>& nums,vector<int> temp,int target,int idx){
    if(target<0) return;
     if(target==0){
         for(int ele : temp){
            cout<<ele<<" ";
         }
         cout<<endl;
        return;
     }
    for(int i=idx;i<nums.size();i++){
        temp.push_back(nums[i]);
         CombinationSum(nums,temp,target-nums[i],i);
         temp.pop_back();
    }
}
int main(){
    vector<int> nums{2,3,5};
     int target = 8;
     vector<int> temp;
     CombinationSum(nums,temp,target,0);
    return 0;
}