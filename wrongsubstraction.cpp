#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
    int n,k;
    cin>>n>>k;
     int i=0,ld=-1;
     while(i < k){
          if(n%10==0)
             n/=10;
          else
              n--;
       i++;
      
        
     }
   cout<<n<<'\n';

  return 0;
}

