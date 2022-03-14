#include <iostream>
using namespace std;

struct node {
  int x;
  node *next;
};


node  *nodeAdd(node *r,int data){
  node *iter;
  iter= new(node);
  iter = r;
  while(iter->next !=NULL)
    iter = iter->next;
  iter->next = new(node);
  iter->next->x = data;
  iter->next->next= NULL;
  return iter;
}

void nodeOut(node *r){
  while(r->next != NULL){
    cout<<r->x<<endl;
    r=r->next;
    
  }
}


node *nodeDel(node *r, int value){
    node *temp;
    node *iter = r;
  /*if(r->x == value){ 
    temp = r;
    r= r->next;
    free(temp);
    return r;

  }*/
  while(iter->next !=NULL && iter->next->x != value){
    iter = iter->next; 
  }
  if(iter->next->x == value){
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);
    return r;
  }
  else{
    temp = iter->next;
    iter->next = iter->next->next;
    iter->next->next = NULL;
    free(temp);
    return r;

  }
}


int main(){
  node *root;
  root = new(node);
  root->x = 10;
  root->next = NULL;
  for(int i=2;i<8;i++){
    nodeAdd(root,10*i);
  }

/*
  ADDED BETWEEN 2. - 3. NODES
  node *temp = new(node);
  temp->x = 25;
  temp->next = root->next->next;
  root->next->next = temp;
*/
  /*node *temp;
  temp= root->next->next;
  root->next->next = root->next->next->next;
  free(temp);
*/
  


  nodeDel(root,60);
  nodeOut(root);


}