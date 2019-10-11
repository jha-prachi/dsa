#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i*i<=n; i++){
        if (n%i!=0){
            cout<<"This is a prime number :"<<n <<endl;
        }
        else{
            cout<<"This is nit a prime number :"<< n<<endl;
        }
        
    }
    return 0;

}