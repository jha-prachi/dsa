#include<iostream>

using namespace std;
int main (int args , char **argv)
{
    int i=1; // scope in main 
    int a=2;
   for(;i<=10;)
   //while(i<=10)
 {
    cout<<a*i<<" ";
    
    i++;   
}
cout<<i<<endl;
} // mains ends 



// main{
//     int something=5;
//     for{ // here for loop start scope of for
//         cout<<something
//         int anotherthing =10;
//     } // here for loop ends

// cout<<anotherthing; // will not work because anotherhting isinitizaled in for loop 


// } //  main ends 