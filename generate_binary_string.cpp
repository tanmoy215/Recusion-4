#include<bits/stdc++.h>
using namespace std;
void binarystring(string str,int n){
     if(str.length()==n){
        cout<<str<<endl;
        return;
     }
       binarystring(str+'0',n);
      if(str.length()==0 || (str[str.length()-1]=='0')) binarystring(str+'1',n);
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    binarystring("",n);
    return 0;
}