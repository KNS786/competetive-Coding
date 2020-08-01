#include<bits/stdc++.h>
using namespace std;
int upper=0,lower=0;
char str[10000];
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   scanf("%s",str);
   for(int i=0;i<strlen(str);i++){
       if( str[i]>='a' && str[i]<='z') lower++;
       if ( str[i]>='A' && str[i]<='Z') upper++;
    }
    if( lower < upper )
       {
             for(int i=0;i<upper+lower;i++)
                 {
                    if( str[i]>='a' && str[i]<='z')
                          str[i]=65+str[i]-97;

                  }
            

      }
   else{

            for(int i=0;i<lower+upper;i++)
                if(str[i]>='A' && str[i]<='Z')
                     str[i]=97+str[i]-65;

    }
  cout<<str<<'\n';
return 0;
}

