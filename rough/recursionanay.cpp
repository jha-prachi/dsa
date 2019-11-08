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
 int betterpower(int a , int b){
     if(b==0){
         return 1;
     }
     int ans  = betterpower(a , b/2);
    // ans*=ans;
    return b%2==0?ans*ans:ans*ans*a;


 }
int main(){
    //cout<<power(2,8);
    //cout<<factoraial(5);
    cout<<betterpower(2,9);
    return 0;
}
