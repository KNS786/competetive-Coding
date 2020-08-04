#include<bits/stdc++.h>
using namespace std;

int INF=(1<<29);
int max_x=-INF;
int max_y=-INF;
int min_x=INF;
int min_y=INF;

int T,n,ch;
int x,y,r,dx,dy;

int main(){
	  scanf("%d",&T);
	  while(T--){
	      scanf("%d",&n);
	      while(n--){
	      	getchar();
	      	 scanf("%c",&ch);
	           if(ch=='p'){
	           	   scanf("%d %d",&x,&y);
			   }
			   else if(ch=='c'){
			   	    scanf("%d %d %d",&x,&y,&r);
			   	    
			   	    dx=x-r;
			   	    dy=y-r;
			   	       
			   	    x+=r;
			   	    y+=r;
			   	       
			   	       max_x=max(dx,max_x);
			   	       min_x=min(dx,min_x);
			   	       
			   	       max_y=max(dy,max_y);
			   	       min_y=min(dy,min_y);
			   	       	   	    
			   	    
			   }
			   else if(ch=='l'){
			   	   
			   	     scanf("%d %d %d %d",&x,&y,&dx,&dy);
			   	     
			   	    max_x=max(dx,max_x);
			   	    min_x=min(dx,min_x);
			   	    
			   	    max_y=max(dy,max_y);
			   	    min_x=min(dy,min_y);
			   	   
			   }
			   
			 max_x=max(x,max_x);
			 min_x=min(x,min_x);
			
			  max_y=max(y,max_y);
			  min_y=min(y,min_y);
			    
			   
		  }
		  printf("%d %d %d %d\n",min_x,min_y,max_x,max_y);  
		  
	  }
	  
	  return 0;
	  
	  
}

