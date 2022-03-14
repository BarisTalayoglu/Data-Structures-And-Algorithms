#include <iostream>
using namespace std;

struct node{
  int x;
  node *next;
  node *prev;
};

node* outList(node *r){
  node *iter = r;
  while(iter != NULL){
    cout<<iter->x<<endl;
    iter= iter->next;
  }
  return iter;
}

void addList(node *r,int value){
  node *iter =r;
  while(iter->next != NULL){
    iter = iter->next;
  }
  iter->next = new(node);
  iter->next->x = value;
  iter->next->prev = iter;
  iter->next->next = NULL;
}

node *delNode(node *r,int value){
  node *iter =r;
  node *temp;

  while(iter->next != NULL && iter->next->x != value){
    iter = iter->next;
  }
  if(iter->next->next != NULL){
    temp = iter->next;
    iter->next->next->prev = iter->next;
    iter->next= iter->next->next;
    free(temp);
    return r;
  }
  
  else{
    temp = iter->next;
    iter->next = NULL;
    free(temp);
    return r;
  }
}


int main(){
  node *root = new(node);
  root->x=10;
  root->next = NULL;
  root->prev = NULL;


  for(int i=2;i<6;i++){
    addList(root,10*i);
  }
    delNode(root,50);
  outList(root);

}