#include <iostream>

using namespace std;

struct n{
    int x;
    n *next;
};
typedef n node;

node * push(node *root,int data) {

    node *iter= root;
    while(iter->next != NULL)
        iter = iter->next;
    iter->next = new(node);
    iter->next->x = data;
    iter->next->next = NULL;
    return root;

}

node * pop(node *root){
    node *iter = root;
    node *temp;
    while(iter->next->next != NULL)
        iter = iter->next;
    temp = iter->next;
    iter->next = NULL;
    free(temp);
    return root;

}

void outList(node *root){
    while(root !=NULL){
        cout<<root->x<<endl;
        root = root->next;
    }


}

int main(){
    node *root = new(node);
    root->x = 1;
    root->next = NULL;
    push(root,2);
    push(root,4);
    push(root,10);
    pop(root);
    pop(root);

    outList(root);
}


