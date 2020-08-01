#include<bits/stdc++.h>
using namespace std;

int arr[10000]={0},
    color[10000]={0},
    top=0;


struct Node{
     int data,color;
     struct Node * parent;
     struct Node * left;
     struct Node * right;

};

Node * newNodes(int val){
      Node * newNode=(struct Node*)malloc(sizeof(struct Node));
      newNode->color=0;
      newNode->parent=NULL;
      newNode->data=val;      
      newNode->left=NULL;
      newNode->right=NULL;
};
Node * insert(Node * root,int val){

      int leftadj=0,rightadj=0;
      if(root->parent->left->color==1 || root->parent->right->color==1){
         root->parent->data=val;
         root->parent->color=0;
         root->parent->left->color=1;
         root->parent->right->color=1;
       }
      if(root->data > val){
          root->left=insert(root->left,val);
          root->parent->color=1;
          leftadj++;
       }
      if(root->data < val){
          root->right=insert(root->right,val);
          root->parent->color=1; 
          rightadj++;
      }
       if(leftadj!=rightadj){
             
             if( leftadj > rightadj)
              {
               root->parent=root->parent->right;
               root->parent->right=root->parent->left;
              }
             else{
              root->parent=root->parent->left;
              root->parent->left=root->parent->right;
             }    
            
          root->parent->left=root->parent;
          root->parent=root->parent->right;

       } 
};
Node * inorder(Node * root )
{
     if(root==NULL)
        return NULL;
     inorder(root->left);
     arr[top]=root->data;
     color[top]=root->parent->color;
     top++;
     inorder(root->right);
};
Node * preorder(Node * root){
     if(root==NULL)
        return NULL;   
      arr[top]=root->data;
      color[top]=root->parent->color;
      top++;
      preorder(root->left);
      preorder(root->right);

};
Node * postorder(Node * root){
     if(root==NULL)
        return NULL;
      postorder(root->left);
      postorder(root->right);
      arr[top]=root->data;
      color[top]=root->parent->color;
      top++;
};
void display(){
   
  cout<<"Data values "<<'\n'; 
   for(int i=0;arr[i];i++)
       cout<<arr[i]<<" ";

    cout<<"colors values "<<'\n';
   
   for(int j=0;colors[j];j++)
       cout<<colors[j]<<" ";
  
}
int main(){
         struct Node * root=NULL;
         root=insert(root,10);
         root=insert(root,23);
         root=insert(root,2);
         root=insert(root,7);
         root=insert(root,3);
         root=insert(root,9);
         root=insert(root,34);
         inorder(root);
         top=0;
         preorder(root);
         top=0;
         postorder(root);
         top=0;
         display();
     return 0;
}    
