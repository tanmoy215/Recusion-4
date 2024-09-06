#include<bits/stdc++.h>
using namespace std;
string countAndsay(int n){
     if(n==1) return "1";
     string str = countAndsay(n-1);
     string ans = "";
     char ch = str[0];
     int freq = 1;
     for(int i=1;i<str.length();i++){
        char dh = str[i];
        if(ch==dh){
            freq++;
        }
        else{
            ans+=(to_string(freq)+ch);
            ch=dh;
            freq=1;
        }
     }
     ans+=(to_string(freq)+ch);
     return ans;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    string str = countAndsay(n);
    cout<<str<<endl;
    return 0;
}