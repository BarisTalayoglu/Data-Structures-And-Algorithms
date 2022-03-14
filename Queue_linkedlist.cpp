#include <iostream>
using namespace std;

struct n{
  int data;
  n *next;
};

typedef n node;
node * root = NULL;
node * last = NULL;
void enqueue(int x){
  if(root == NULL){
    root = new node;
    root->data = x;
    root->next = NULL;
    last = root;
  }
  else {
    last->next = new node;
    last->next->data =x;
    last = last->next;
    last->next = NULL;
  }

}

void dequeue(){
  if(root == NULL){
    cout<<"linked list bos";    
    
  }
  node * temp = root;
  root = root->next;
  free(temp);
  
}


void out(){
  while (root != NULL) {
      cout<<root->data<<" ";
      root = root->next;
   }
   cout<<endl;
}

int main(){
  
  enqueue(5);
  enqueue(6);
  enqueue(7);
  enqueue(8);
  enqueue(9);
    dequeue();
      dequeue();
        dequeue();
  out();
  
  
}