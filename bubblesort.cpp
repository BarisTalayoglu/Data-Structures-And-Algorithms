#include <iostream>
using namespace std;


int main(){

int A[10] = {55,10,7, 13,55, 28,8, 20,7, 88};

for(int i=0;i<10;i++){
  for(int j= 0;j<9;j++){
    if(A[j+1]<A[j]){
      int temp = A[j+1];
      A[j+1] = A[j];
      A[j] = temp;
    }
  }
}

for(int i=0;i<10;i++){
  cout<<A[i]<<" ";
}

}