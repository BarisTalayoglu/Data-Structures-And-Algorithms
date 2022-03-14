#include <iostream>
using namespace std;


struct n{
  int data;
  n *right;
  n *left;
};
typedef n node;


node *nodeAdd(node *tree,int x){
  if(tree == NULL){
    node *root = new node;
    root->left = NULL;
    root->right = NULL;
    root->data = x;
    return root;
  }
  if(tree->data < x){
    tree->right = nodeAdd(tree->right,x);
    return tree;
  }
  tree->left = nodeAdd(tree->left,x);
  return tree;
}

void traversal(node *tree){
  if(tree == NULL)
    return ;
  
  traversal(tree->left);
  cout<<tree->data<<" ";
  traversal(tree->right);

}

int findNode(node *tree,int x){
  if(tree == NULL){
    return -1;
  }
  if(tree->data == x){
    return 1;
  }
  if(findNode(tree->right,x)==1)
    return 1;
  if(findNode(tree->left,x)==1)
    return 1;
  return -1;
}

node* FindMin(node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

node* Delete(node *root, int data) {
	if(root == NULL)
   return root; 
	else if(data < root->data) 
    root->left = Delete(root->left,data);
	else if (data > root->data) 
    root->right = Delete(root->right,data);

	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}

int main(){
node *tree = NULL;
tree = nodeAdd(tree,12);
nodeAdd(tree,18);
nodeAdd(tree,24);
nodeAdd(tree,26);
nodeAdd(tree,27);
nodeAdd(tree,28);
nodeAdd(tree,56);
nodeAdd(tree,190);
nodeAdd(tree,200);
nodeAdd(tree,213);
Delete(tree,190);
traversal(tree);

}