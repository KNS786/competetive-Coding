#include<bits/stdc++.h>
using namespace std;

int inputs;

struct Node{
	int value;
	struct Node * left;
	struct Node * right;
	
};
Node * newNode(int data){
    struct Node * newNodes=(struct Node*)malloc(sizeof(struct Node));
    newNodes->value=data;
    newNodes->left=NULL;
    newNodes->right=NULL;
};
Node * insert(Node * root,int data )
{
	 if(!root)
	   return newNode(data);
	 if(root->value < data)
	    root=insert(root->right,data);
	 if(root->value > data)
	    root=insert(root->left,data);	    
};
int zigzags(Node * root,vector<vector<int> >result,int level){
		if(root==NULL)
		   return NULL;
		if(result[level])
		   result[level].push_back(root->value);
		else
		   result[level]=result[level].push_back(root->value);
		    
		zigzags(root->left,result,level+1);
		zigzags(root->right,result,level+1);
		
}

void display(vector<vector<int> >res){
	  for(int i=0;i<res.size();i++)
	  {
	  	 for(int j=0;j<res.size();j++)
	  	  {
	  	  	cout<<res[i][j]<<" ";
		  }
	  }
}

Node * zigzag(Node * root){
	int level=0;
	vector<vector<int> >result;
	
	for(int i=0;i<inputs;i++)
	    result[i].resize(inputs);
	
	zigzags(root,result,level);
	/* reverse the odd index */
	 for(int i=0;i<result.size();i++)
	    {    
	       if((i&1) && (result[i].size()>1)){
	       	    int top=0;
	       	    for(int j=result[i].size()-1;j>=0;j--)
	       	    {
	       	        result[i][top]=result[i][j];
	       	        top++;
	       	    }
	       	         
		   }
		  
	}
	display(result);
};
int main(){
	struct Node * root=NULL;
	cout<<"Enter the size of the values You inserted  ";
	cin>>inputs;
	cout<<"\n";
	
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,23);
	root=insert(root,3);
	root=insert(root,6);
	root=insert(root,1);
	root=insert(root,12);
	root=zigzag(root);
 return 0;
}
