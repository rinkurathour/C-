#include<iostream>
using namespace std;

int findDuplicateElement(int arr[],int size){
    int ans = 0;
     for(int i = 0; i<size;i++){
        ans = ans^arr[i];
     }
     for(int i = 1; i<size; i++){
        ans  = ans^i;
     }
     return ans;
}
int main(){
    int arr[5] = {4,2,1,3,1};

   int findElement =   findDuplicateElement(arr,5);
   cout<<"The Element is :"<<findElement<<endl;
    
    return 0;
}