#include<iostream>
using namespace std;
int digits(int n)
{
    int len = 0;
    while (n!=0){
        len++;
        n/=10;
    }
    return len;
}
 int rotate(int n, int r){
     int digit = digits(n);
     r%=digit;
     r =r <0 ? r + digit : r;
     int mul = 1;
     int divd = 1;
        for(int i = 1; i<= digit; i++){
            if(i <=r)
                mul *= 10;
            else
                divd *=10;
        }
         
       int fdigits = n %divd;
       int sdigits = n / divd; 
       return ((fdigits*mul)+sdigits);

     }
 int main(int argc , char **argv){
     int n,r;
     cout<<"enter the  number :" ;
     cin>>n;
     cout<<"enter the number : " ;
     cin>>r;
    //  int len=digit(n);
    //  r=(r>0)?r:r+len;
    //  r=r%len;
    //  cout<<"no after rotation: "<<rotate(n,len,r) ;
    cout<<"no after rotation: "<<rotate(n,r) ;
 
}