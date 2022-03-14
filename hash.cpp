#include <iostream>
using namespace std;

struct data{
  int id;
  int index;
};

data A[27];

int h(int x){
  return (8*x + 5)% 27;
}


int put(data data){
  if(A[data.index].index == 0){
    A[data.index].id = data.id;
    A[data.index].index = data.index;
    
  }
  else if(A[data.index].index != 0){
    int count = data.index;
    while(A[count].index != 0)
      count++;
    if(A[count].index == 0){
      A[count].id = data.id;
      A[count].index = data.index;
    }
  }
  return 0;
}



int print(){
  for(int i=0;i<27;i++){
    cout<<i<<". "<<A[i].id<<" "<<A[i].index<<endl;
  }
 return 0;
}


int main(){
  data data;
  for(int i=0;i<27;i++){
    A[i].id = 0;
    A[i].index = 0;
  }
  data.id = 100;
  data.index = h(100);
  put(data);
  data.id = 100;
  data.index = h(100);
  put(data);
  data.id = 9423;
  data.index = h(9423);
  put(data);
  print();

}