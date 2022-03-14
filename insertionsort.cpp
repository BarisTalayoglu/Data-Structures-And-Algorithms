#include <iostream>
using namespace std;


int main(){
  int A[5] = {8,4,3,7,1};

  for(int i=1;i<5;i++){
    int j = i-1;
    int current = A[i];
    
    while(j>=0 && A[j]>current){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = current;


  }
  cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<A[4];

  



}