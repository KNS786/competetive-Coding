#include<iostream>
using namespace std;

int main(){
  int n,i,j;
    cin>>n;
	int chairs=12;
	while(n--){
	 int num,res,left,right;
	 cin>>num;
	 boolean  found=false;
	   for(i=1;i<10000 && !found ;i++)
	     {   
		   left=i*chair+1;
		   right=(i+1)*chair;
		     if(left==num)
			    ans=right;
		     if(left<num && left+5<num)
			    if(num==left+5)cout<<right-5;
				
			    
			
			
			
	     }
		
		 
	     
		
	   
	 }