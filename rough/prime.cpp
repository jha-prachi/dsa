#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your number";
    int n;
    cin>>n;
    int flag =0;
    int i=0;
    for(i=2;i*i<=n; i++){
        if (n%i==0){
            flag=1;
            break;
           
        }
       else{
           flag=0;
       }   
         
    }

    if(flag==1){
        cout<<" this is not a prime number"<<i;
    }
    else{
        cout<<"this is a prime number";
    }
       

    return 0;
// loop should run 7*7
// end (aisa number mile jo usse divide karde , breakk;)
// i<root(n)
// i*i<=n
// 6*6 == 36
// 36==37

}

for(intialize condition , test condition ; update cndn )

