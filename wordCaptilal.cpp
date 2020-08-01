#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
  


   string str;
   cin>>str;
    
    if( (str[0]-'0')>=49 && (str[0]-'0')<=74)
      {
         str[0]=(char)str[0]-32;
     
     }
   cout<<str;
   
return 0;
}

