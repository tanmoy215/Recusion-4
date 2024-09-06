#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>& nums,vector<int> ans,int idx){
    if(idx==nums.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(nums,ans,idx+1);
    if(ans.size()==0 || nums[idx-1]==ans[ans.size()-1]){
        ans.push_back(nums[idx]);
        subset(nums,ans,idx+1);
    }
}
int main(){
    vector<int> nums{1,2,3,4};
     vector<int> temp;
     subset(nums,temp,0);
    return 0;
}