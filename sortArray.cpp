#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   /* int arr[7] = {8,2,9,1,0,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
   

    sort(arr,arr+n);

    for(int i = 0;i<7;i++){
        cout<<arr[i]<<" ";
    }*/

    // code for Sum of Min and Max
    int arr[7] = {1,2,4,5,6,6,6};
    int min = INT_MAX;
    int max = INT_MIN;
    int sum  = 0;
    for(int i = 0;i<7;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    for(int j = 0;j<7;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    sum = min +max;
    cout<<sum<<endl;
    return 0;
}