#include<iostream>
using namespace std;
 int factoraial(int n){
     
     if(n==1)
     return 1;

      int rem=n*factoraial(n-1);
   //  cout<<rem <<" ";
     return rem;
 }
 int power(int a , int b){
     if(b==1)
     return a;
    
     int ans=a*power(a , (b-1));
     return ans;
 }

int main(){
    cout<<power(2,8);
    //cout<<factoraial(5);
    return 0;
}
/* 
a^b using recursion..
int powerab(int a , int b ){
    a^5 = a * a^4
    a^4 = a * a^3
    a^3 = a * a^2
    a^2 = a * a^1
    a^1 = a * a^0
}


*/