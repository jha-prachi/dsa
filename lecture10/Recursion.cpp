#include <iostream>

using namespace std;
void printNos(int n){
    if(n==0)
    {
        cout << "Base" << n << endl;
        return;
    }
        cout << "HI" << " " << n << endl;;
        printNos(n-1);
        cout << "BYE" << n << " "<<endl;
    }

void Even_Odd(int n){
    if(n==0){
        cout << n <<endl;
        return;
    }
    if(n%2==0)  //if((n&1)==0)
        cout<<"Even"<<n<<endl;
    Even_Odd(n-1);    
    if(n%2!=0)
        cout<<"odd "<<n<<endl;
    }
    int factorial(int n){
        if(n==1)
        return 1;
        int ans=factorial(n-1);
        return ans*n;
    }
    int power_function(int a, int b){
        if(b==1)
        return a;
        int ans =power_function(a,b-1);
        return ans*a;
    }
    // Complexity become logn
    int Best_power(int a , int b){
        if(b==0)
        return 1;
        int ans=Best_power(a , b/2);
        ans*=ans;
        return (b%2!=0?ans*a:ans);  //ternary
    }
    int Fibbonaci(int n){
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        int ans=Fibbonaci(n-1)+Fibbonaci(n-2);
        return ans;
    }

int main(int args , char** argv){
   // int a;
   // cout<<"Enter your number : "
   // cin>>a;
   // printNos(10);
 //  Even_Odd(10);
 int n;
 cout<<Fibbonaci(10);
//     cout<<factorial(5);
// int a,b;
//     cout<<power_function(2,8);
    return 0;
}