#include<iostream>
using namespace std;
int reverse(int n){
   // int n;
    int res=0;
    while(n!=0){
        int rem = n%10;
        res=(res*10)+rem;
        n/=10;
            }
return res;
}


int main(){
    cout<<"enter your number : ";
    int a;
    cin>>a;
    int ans = reverse(a);
    cout<<ans;
    return 0;
}