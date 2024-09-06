#include<bits/stdc++.h>
using namespace std;
int hcff(int a, int b){   //iteratively
  for(int i=min(a,b);i>=2;i--){    //TC = O(min(a,b))
     if(a%i==0 && b%i==0) return i;
  }
  return 1;
} 
int hcf(int a, int b){
    if(a==0) return b;
   else  hcf(b%a,a);     //TC = = O(log(a+b))
}
int main(){
    int a = 24;
    int b = 60;
    cout<<hcf(a,b)<<endl;
    return 0;
}