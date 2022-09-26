#include<iostream>
using namespace std;


int getMin(int arr[],int size){
    int min = INT_MAX;
    for(int i =0; i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[],int size){
    int max = INT_MIN;
    for(int i =0; i<size;i++){
        if(max<arr[i]){
            max= arr[i];
        }
    }
    return max;
}
int main(){

    int size;
    cin>>size;

    int arr[50];


    for(int i = 0; i<size;i++){
        cin>>arr[i];
    }
     cout<<"The value of max is "<<getMax(arr,size)<<endl;
     cout<<"The value of min is "<<getMin(arr,size)<<endl;
    return 0;
}