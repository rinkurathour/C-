#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){

    int start = 0;
    int end = size - 1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
   
    int arr[6] = {2,4,7,9,-1,5};

    reverseArray(arr,6);
    printArray(arr,6);
    return 0;
}