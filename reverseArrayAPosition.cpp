#include<iostream>
using namespace std;

void reverseArray(int arr[],int m,int n){
    int start = m+1;
    int end = n-1;
    while(start<=end){
         swap(arr[start],arr[end]);
        
        start++;
        end--;
    }
   
}
void printArray(int arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    reverseArray(arr,3,6);
    printArray(arr,6);
    return 0;
}