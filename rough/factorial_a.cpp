#include<iostream>
using namespace std;
int main(){
   // n = n* (n-1)*(n-2)* .... 2*1;
   // 5 = 5*4*3*2*1 = 1*2*3*4*5
//    a = a+b;
    int result =1 ;
    int n ;  
    cin>>n;

    // result=1; 
     //cout<<result;
       for(int i =1 ; i<= n; i++){
       result = result * i ;

   }
   // result(updated value) = result(previous vslu) * i;
   // a= a+b  can be  written as a+=b
cout<<"Hamara bachha: " <<result;


    return 0;
}
