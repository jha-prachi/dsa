#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int octaladd(int num1 , int num2){
    
    if(num1<num2){
   
        int temp=num1;
        num1 = num2 ;
        num2 =temp;
    }
     int pow =1;
    int res=0;
    int borrow=0;
    while(num1!=0 || borrow!=0){
        int rem = num1 %10 + num2 %10 +borrow;
        num1/=10;
        num2/=10;
        if(rem>7){
           
            borrow =1;
            rem+=2;
             rem=rem%10;
        }else{
            borrow = 0;
        }
        
        res+=rem*pow;
        pow*=10;  
    }
 
    return res;

 
    }
int main() {
    int num1 , num2;
    cin>>num1>>num2;
    cout<<octaladd(num1,num2);
    return 0;
}

   
