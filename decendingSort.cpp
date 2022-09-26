#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {8,2,9,1,0,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    sort(arr,arr+n,greater<int>());

    for(int i = 0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}