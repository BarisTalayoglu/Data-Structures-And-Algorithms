#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct n{
  int x;
  n *next;
};

typedef n node;

int main(){

  node *root;
  root = new(node);
  root->x=10;
  root->next = new(node);
  root->next->x = 20;
  cout<<root->x <<endl;

  node *iter;    
  //for accessing other nodes we created iterator, we can do it without iterator= root->next->x;
  iter = root;
  iter = root->next;

  cout<<iter->x;

}


