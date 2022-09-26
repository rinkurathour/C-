#include<iostream>
using namespace std;

int updateFuctionForArray(int arr[], int size){
    arr[0] = 12;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
int main(){
    
    int arr[3] = {1,3,4};
    cout <<"Before update Array"<<endl;
    updateFuctionForArray(karr,3);
    cout<<endl;
   cout<<"Afer updating Array"<<endl;
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}