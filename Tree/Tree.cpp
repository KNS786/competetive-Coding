#include<bits/stdc++.h>
using namespace std;

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

Node * insert(Node * root,int value){
     if(root==NULL)
        return newNode(value);
     if(root->value < value)
        root=insert(root->right,value);
     if(root->value > value)
        root=insert(root->left,value);	 	
};

Node * inorder(Node * root){
	 if(root==NULL)
	    return NULL;
	 inorder(root->left);
	 cout<<root->value<<" ";
	 inorder(root->right);
	 
};

Node * preorder(Node * root){
      if(root==NULL)
         return NULL;
       cout<<root->value<<" ";
       preorder(root->left);
       preorder(root->right);
	
};
Node * postorder(Node * root){
     if(root==NULL)
	     return NULL;
	  postorder(root->left);
	  postorder(root->right);
	  cout<<root->value<<" ";
	  	
};
void printBFS(vector<int>data){
	vector<int>::iterator it;
	for(it=data.begin();it!=data.end();it++)
	   cout<<*it;
}

Node * BFS(Node * root){
	 int index=0;	 
       vector<int>data;
       data[index]=root->value;
       while(data.size())
       {
       	   index++;
       	   data[index]=root->value;
       	  if(root->left)
       	       root=root->left;
       	  if(root->right)
       	     root=root->right;
       	     
	   }
	printBFS(data);
};

int main(){
	struct Node * root=NULL;
	root=insert(root,10);
	root=insert(root,2);
	root=insert(root,4);
	root=insert(root,22);
	root=insert(root,33);
	root=insert(root,17);
	cout<<"In order "<<endl;
	inorder(root);
	cout<<"Pre order "<<endl;
	preorder(root);
	cout<<"Post order "<<endl;
	postorder(root);
	cout<<"BFS values "<<endl;
	BFS(root);
	
  return 0;
  
}
