#include<iostream>
using namespace std;

void swapAtternate(int arr[],int size){
    for(int i = 0;i<size;i++){
      if(i+1<size){
        swap(arr[i],arr[i+1]);
        i++;
      }
    }
}
void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int arr[5] = {5,6,9,2,7};

     swapAtternate(arr,5);
     printArray(arr,5);
    return 0;
}