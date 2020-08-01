#include<bits/stdc++.h>
using namespace std;
int main(){
  
    int X,Y,res=0;
    cin>>X>>Y;
    while(X<=Y){
         X*=3;
         Y*=2;
         ++res; 
    }
  cout<<res<<'\n';
return 0;
}

