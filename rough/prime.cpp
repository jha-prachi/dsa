#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your number";
    int n;
    cin>>n;
    
    for(int i=2;i*i<=n; i++){
        if (n%i!=0){
            cout<<"This is a prime number :"<<n <<endl;
        }
        
        // else{
        //     cout<<"This is not a prime number :"<<endl;
        // }
        //       break;
  
    }
    return 0;

}