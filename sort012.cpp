#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void sort012(int arr[], int n){
    int low = 0; 
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){

    int arr[6] = {0 ,1, 2 ,2 ,1 ,0};

    sort012(arr,6);
    printArray(arr,6);
    return 0;
}