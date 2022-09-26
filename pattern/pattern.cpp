#include<iostream>
using namespace std;



int main(){
 cout<<"Hello Worls"<<endl;
/*
Print this pattern
*
**
***
****

 int n;
 cin>>n;

 int row = 1;
 while(row <= n){
    int col = 1;
    while(col<=row){
        cout<<"*";
        col = col+1;
    }
    cout<<endl;
    row = row+1;
 }
 
 ***************************** print this pattern
 1
 2 3
 3 4 5
 4 5 6 7
int n;
 cin>>n;

 int row = 1;
 while(row <= n){
    int col = 1;
    while(col<=row){
        cout<<row+col-1<<" ";
        col = col+1;
    }
    cout<<endl;
    row = row+1;
 }
*/
// *******************************************************print this pattern
/* 
         *
        * *
       * * *
      * * * *


  int n;
 cin>>n;
    
    int row = 1;
    while(row <=n){
        int space1 = n-row;
        while(space1){
            cout<<" ";
            space1 = space1-1;
        }
        int col = 1;
        while(col<=row){
            cout<<"*";
            col = col+1;
        }
         int space2 = n-row;  
        while(space2){
            cout<<" ";
            space2 = space2-row;
        }
        row = row+1;
    }
    */

   
}