#include<bits/stdc++.h>
using namespace std;
void generate(string str,vector<string>& v,int op, int cl,int n){
     if(op==n && cl==n){
        v.push_back(str);
        return;
     }
     if(op<=n) generate(str+'(',v,op+1,cl,n);
    if(op>cl) generate(str+')',v,op,cl+1,n);
}
int main(){
    int n =3;
    vector<string> v;
    generate("",v,0,0,n);
    for(string ele : v){
        cout<<ele<<endl;
    }
    return 0;
}