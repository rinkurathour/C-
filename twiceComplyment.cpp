#include<iostream>
#include<math.h>
using namespace std;

int update(int a ){
  int ans = a*a;
  return ans;
}


int main(){
/*
   int n =5;
   int* b = &n;
   int** c = &b;

   cout<<"the value of n :"<<n<<endl;
   cout<<"The value of &n :"<<&n<<endl;
   cout<<"The value of *b :"<<*b<<endl;
   cout<<"The value of b :"<<b<<endl;
   cout<<"the value of *c :"<<*c<<endl;
   cout<<"the value of **c :"<<**c<<endl;
   cout<<"the value of c :"<<c<<endl;
   
*/

// Array with pointer
/*
    int marks[5] = {56,98,45,88,89};
    int* p = marks;

    cout<<"the vlaue of *p :"<<*p<<endl;
    cout<<"the vlaue of *p+1 :"<<*(p+1)<<endl;
    cout<<"the vlaue of *p+2 :"<<*(p+2)<<endl;
  */
      // complement base of 10 integer
     /* 
      int n;
      cout<<"Enter a number : ";
      cin>>n;

      int m = n;
      int mask = 0;

     while(m != 0){
          mask = (mask<<1) | 1;
          m = m>>1;

     }

     int ans = (~n) & mask;
     cout<<ans<<endl;
     */
     // Power of three
      
    int a = 14;

    a = update(a);

    cout<<a<<endl;

     
   return 0;
}