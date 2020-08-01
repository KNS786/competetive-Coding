#include<bits/stdc++.h>
#define no_of_chars 256
using namespace std;
char str[1000];
int hashs[no_of_chars]={0};
int distinct=0;
int main(){
   scanf("%s",str);
    for(int i=0;str[i];i++)
      hashs[str[i]]++;
   for(int  j=0;j<no_of_chars;j++)
      if(hashs[j])
        distinct++;
  if(distinct % 2==0)
     cout<<"CHAT WITH HER!";
  else
    cout<<"IGNORE HIM!";
return 0;
}

