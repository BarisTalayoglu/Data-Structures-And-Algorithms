#include <iostream>
using namespace std;

void quickSort(int arr[],int left, int right){
  int i,j,pivot,temp;
  i = left;
  j = right;
  pivot = arr[(i+j)/2];
  do{
    while(arr[i] < pivot)
      i++;
    while(arr[j] > pivot)
      j--;

    if(i <= j){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }

  }while(i < j);
  if(i < right)
    quickSort(arr, i, right);
  if(left < j)
    quickSort(arr, left, j );

}






int main(){
int arr[] = {7,3,5,1,2};
quickSort(arr,0,4);

for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
}

return 0;
}