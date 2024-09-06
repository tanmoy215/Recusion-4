#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int>& arr){   //iteratively
      vector<vector<int>> temp;
     
      for(int i=0;i<arr.size();i++){
         vector<int> ans;
            for(int j=i;j<arr.size();j++){
                 ans.push_back(arr[j]);
                 temp.push_back(ans);
            }
      }
      //print the 2d vector
        for (const auto& row : temp) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout<<endl; 
    }
}
void subarrayl(vector<int>& nums)    //without using extra space
{
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<nums[k]<<" ";
            }
            cout<<endl;
        }
    }
}
  void subArray(vector<int> temp,vector<int>& arr,int idx){     //recursively
       if(idx==arr.size()){  //base case
         for(int ele : temp){
            cout<<ele<<" ";
         }
         cout<<endl;
         return;
       }
      subArray(temp,arr,idx+1);
      if(temp.size()==0 || arr[idx-1]==temp[temp.size()-1]){
           temp.push_back(arr[idx]);
          subArray(temp,arr,idx+1);
      }
  }
int main(){
    vector<int> arr{1,2,3};
    vector<int> temp;
    // subarray(arr);
   // subarrayl(arr);
   subArray(temp,arr,0);
   return 0;   //without repetition 
}