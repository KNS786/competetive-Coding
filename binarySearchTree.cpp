#include<iostream>
using namespace std;

struct Node{
	int value;
	struct Node* left;
	struct Node* right;
};
struct Node* createNewNode;


createNewNode* EachNode(int val){
	  createNewNode* newNode=(createNewNode*)malloc(sizeof(createNewNode));
	  newNode->value=val;
	  newNode->left=NULL;
	  newNode->right=NULL;
      return newNode;
}

createNewNode* insertNode(createNewNode* root,int val){
	  if(root==NULL){
		  root=EachNode(val);
		  return root;
	  }
	else if(root->value<val){
		root->left=inserNode(root->left,val);
	}
	else{
		root->right=insertNode(root->right,val);
	}
	return root;
}
int main(){
	struct Node* root=NULL;
	root=inserNode(root,10);
	root=insertNode(root,20);
	root=insertNode(root,30);
	root=insertNode(root,40);
	return 0;
}
	

