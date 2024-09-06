#include<bits/stdc++.h>
using namespace std;
int fun(int n ,int k){
    if(n==1) return 0;
    if(k%2==0){
        int pre = fun(n-1,k/2);
        if(pre==0) return 1;
        else return 0;
    }
    else{
        int pre = fun(n-1,k/2+1);
        return pre;
    }
}
int main(){
     int n=3;
     int k = 2;
     cout<<fun(n,k);
    return 0;
}