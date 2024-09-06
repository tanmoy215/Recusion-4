#include<bits/stdc++.h>
using namespace std;
void conversion(string str,int n){
    if(n<=0){
        reverse(str.begin(),str.end());
        cout<<str<<endl;
        return;
    }
    if(n%2==0) conversion(str+'0',n/2);
    else conversion(str+'1',n/2);
}
int main(){
     int n;
     cout<<"enter number : ";
     cin>>n;
    conversion("",n);
    return 0;
}