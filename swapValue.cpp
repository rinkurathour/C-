#include<iostream>
using namespace std;

int swap(int *a,int *b){
    int temp ;
    temp = *a;
    *a = *b;
    cout<<*a<<endl;

    *b = temp;
    cout<<*b<<endl;
    cout<<*a<<*b<<endl;
    return *a,*b;
}
int main(){
     int a = 1,b = 2;

     swap(&a,&b);
       cout<<a<<" "<<b<<endl;
     
    return 0;
}