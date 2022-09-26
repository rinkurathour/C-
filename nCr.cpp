#include<iostream>
using namespace std;

int factorial(int c){

    int fact = 1;
    for(int i = 1;i<=c;i++){
        fact = fact*i;
    }
   return fact;
 
}
int nCr(int n, int r){
    int nominator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);

    int ans = nominator/denominator;
    return ans;
}
int main(){

     int n,r;
     cout<<"Enter the value n and r : ";
     cin>>n>>r;

     int ans =  nCr(n,r);
     cout<<"The answer is :"<<ans;

    return 0;
}