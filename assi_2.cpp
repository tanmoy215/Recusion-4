#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>& nums, int idx, vector<int> temp, vector<vector<int>>& ans) {
        ans.push_back(temp);  // Add current subset to the result list
        for (int i = idx; i < nums.size(); i++) {
            if (i != idx && nums[i] == nums[i - 1]) continue;  // Skip duplicates
            temp.push_back(nums[i]);
            subset(nums, i + 1, temp, ans);  // Move to the next element
            temp.pop_back();  // Backtrack to explore other subsets
        }
    }
    int main(){
        vector<int> nums{1,2,2};
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> ans;
        subset(nums,0,temp,ans);
        for(const auto&row : ans){
            for(const auto&col : row){
                cout<<col<<" ";
            }
            cout<<endl;
        }
        return 0;
    }