#include<bits/stdc++.h>
using namespace std;
int  kthGrammer(int n, int k){
    if(n==1) return 0;
    if(k%2==0){ //flip, even
        int pre =  kthGrammer(n-1,k/2);
         if(pre==0) return 1;
         else return 0;
    }
    else{  //samr // odd
       int pre =  kthGrammer(n-1,k/2+1);
       return pre;
    }
}
int main(){
    int n =2;
    int k =2;
    cout<<"final ans is : "<< kthGrammer(n,k)<<endl;
    return 0;
}