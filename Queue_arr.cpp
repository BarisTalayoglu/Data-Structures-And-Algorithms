#include <iostream>
using namespace std;

int *Arr = new int[20];
int start= 0;
int last = 0;

void enqueue(int value){
  Arr[last] = value;
  last++;

  }


void dequeue(){
  if(last == 0){
    cout<<"Its not possible to dequeue, 0 data remains"<<endl;
  }
  else{
  Arr[start] = Arr[start+1];
  start++;
  last--;
  }

}

void out(){
  for(int i=0;i<last;i++){
    cout<<Arr[start+i]<<endl;
  }
}

void order(){
  int *Arr2 = new int[10];
  for(int i=0;i<(last-start);i++){
    Arr2[i] = Arr[start+i];
    free(Arr);
    Arr = Arr2;
  }

}

int main(){
  enqueue(5);
  enqueue(6);
  enqueue(7);
  enqueue(8);
  enqueue(9);
  enqueue(10);
  dequeue();
  dequeue();
  dequeue();
  order();
 
  out();
}