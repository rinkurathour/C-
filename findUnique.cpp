#include<iostream>
using namespace std;

int main(){

    int arr[5] = {2,3,5,5,2,4};

    int ans = 0;

    for(int i = 0;i<5;i++){
        ans = ans^arr[i];
        cout<<ans<<endl;
    }
    cout<<"The unique value of "<<ans<<endl;
    return 0;
}