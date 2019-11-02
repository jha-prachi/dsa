#include <iostream>
using namespace std;
/*
//Any base to base
int Anybasetoanybase (int num, int base2, int base1)
{
    int res =0;
    int pow= 1;
    while (num!=0){
        int rem =num % base2;
        num /=base2;
        //res=res+pow*rem
      res+= pow *rem;
      pow *= base1;
         

    }
    return res;
}
*/

int octalsub(int num1 , int num2){
    
    if(num1<num2){
   
        int temp=num1;
        num1 = num2 ;
        num2 =temp;
    }
    int pow =1;
    int res=0;
    int borrow=0;
    while(num1!=0){
        int rem = num1 %10 - num2 %10 +borrow;
        num1/=10;
        num2/=10;
        if(rem<0){
            borrow =-1;
            rem+=8;
        }
        else
            borrow=0;
        res+=rem*pow;
        pow*=10;  
    }
 
    return res;

    

}
int octaladd(int num1 , int num2){
    
    // if(num1<num2){
   
    //     int temp=num1;
    //     num1 = num2 ;
    //     num2 =temp;
    // }
    int pow =1;
    int res=0;
    int borrow=0;
    while(num1!=0 || borrow!=0){
        int rem = num1 %10 + num2 %10 +borrow;
        num1/=10;
        num2/=10;
        if(rem>8){
           
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


int main(int Args ,char ** Argv){
//     cout<<"Enter your number ";
//     int num,base2,base1;
//     cin>>num>> base2>>base1;
    
//     int val = Anybasetoanybase(num,base2,base1);
//     cout<< "here you go : "<<val;
int num1,num2;
cin>>num1>>num2;
int val =octaladd( num1 , num2);
cout<<val;
}