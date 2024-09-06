#include<bits/stdc++.h>
using namespace std;
void palindrome(string str){   //without recursion
int n = str.length();
int i=0;
      int j=n-1;
      bool flag = true;
      while(i<j){
          if(str[i]!=str[j]) flag=false;
          i++;
          j--;
      }
      if(flag) cout<<"palindrom"<<endl;
      else cout<<"Not a Plaindrome"<<endl;
   }
   bool palindromee(string str,int i,int j){    //with recursion
        if(i>j) return true;
        if(str[i]!=str[j]) return false;
       else return palindromee(str,i+1,j-1);  
   }
int main(){
    string str;
     cout<<"enter string : ";
     getline(cin,str);
     for(char &c : str){
        c = tolower(c);
     }
     // palindrome(str);
    cout<<palindromee(str,0,str.size()-1)<<endl;
    return 0;
}