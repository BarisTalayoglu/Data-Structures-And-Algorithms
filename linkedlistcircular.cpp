#include <iostream>
using namespace std;

struct node{
  int x;
  node *next;
};


void addNode(node *r, int data){
  node *iter= new(node);
  iter = r;
  while(iter->next != r){
    iter = iter->next;
  }
  iter->next = new(node);
  iter->next->x = data;
  iter->next->next = r;

}

void outNodes(node *r){
  node *iter= new(node);
  iter = r;
  while(iter->next != r){
    cout<< iter->x<<endl;
    iter = iter->next;
  }
  cout<<iter->x;
}


int main(){

  node *root = new(node);
  root->x = 10;
  root->next=root;

  addNode(root,30);
  addNode(root,40);
  addNode(root,60);
  addNode(root,80);

    outNodes(root);

}