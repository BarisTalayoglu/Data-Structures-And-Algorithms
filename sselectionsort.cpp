#include <iostream>
using namespace std;

int main(){

  int A[] = {2,3,4,1,6,5};
  int len = 6;
  int temp;
  int min;

  for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
      if(A[i]>A[j]){
        min = j;
      }
    }
    temp = A[i];
    A[i] = A[min];
    A[min] = temp;
  }
  cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<A[4]<<" "<<A[5];


}