#include <iostream>
using namespace std;



int main(){

int A[] = {999,12,10,20,30,25,35,33,42};
int j=4;
int max = A[2*j];
  if(A[2*j]<A[2*j+1]){
    max = A[2*j+1];
  }
for(int i=1;i<8;i++){
if(A[j]<=max){
  int temp = max;
  max = A[j];
  A[j] = temp;
  j--;
}
}

for(int i=1;i<8;i++){
  cout<<A[i]<<" ";
}

}