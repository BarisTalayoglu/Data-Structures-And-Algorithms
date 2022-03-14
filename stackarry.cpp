#include <iostream>
using namespace std;
int Arr[6];
int startPoint = 0;





int push(int data){
  if(startPoint ==5){
    cout<<"Your Stack is overflow, adding "<<data<<" not possible."<<endl;
    return -1;
  }
  else{
  Arr[startPoint] = data;
  startPoint ++;
  return 0;
  }
}


void pop(){
  if(startPoint == 0){
    cout<<"Your Stack is empty";
    
  }
  else{
    cout<<"Succesfully popped "<<startPoint<<". element"<<endl;
    startPoint--;
    
  } 
}

void Out(){
  for(int i=0;i<startPoint;i++){
    cout<<Arr[i]<<" ";
  }
  cout<<endl;
}

int main(){


push(5);
push(4);
push(7);
push(9);
push(10);
push(12);
Out();
pop();
pop();
Out();
}